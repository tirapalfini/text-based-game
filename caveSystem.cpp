/*******************************************************************
 **  Filename: caveSystem.cpp
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the cave implementation file.  It manages the
 **  cave structures and the interactions of the player in the caves
 **  Input:
 **  Output:
 *******************************************************************/

#include "caveSystem.h"
#include <iostream>
#include "cavern.h"
#include "mud.h"
#include "main.h"
#include "text.h"
#include "stalagmites.h"
#include "bear.h"
#include "dark.h"
#include "crawl.h"
#include "map.h"
#include "lake.h"
#include "treasure.h"

using std::cout;
using std::endl;
using std::cin;

/************************************************************************
 ** Function: Cave Constructor
 ** Description: This function creates the Cave linked structure
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: creates Caved link object
 ************************************************************************/
Cave::Cave()
{
    main = new MainRoom("Main Room", "\0", "\0");
    mud = new MudRoom("Mud Room", "shovel", "\0");
    stalagmites = new Stalagmites("Stalagmite Room", "\0", "\0");
    bear = new BearRoom("Bear Room", "\0", "shovel");
    dark = new DarkRoom("Dark Room", "doritos", "flashlight");
    crawl = new CrawlSpace("Crawlspace", "flashlight", "\0");
    
    
    /* Uninitialized pointers */
    lake = NULL;
    treasure = NULL;
    
    addedCave = false;
    blockedCave = false;
    hasTreasure = false;
    
    
    /* North, south, east, west */
    main->setPointers(NULL, bear, stalagmites, dark);
    stalagmites->setPointers(crawl, mud, mud, main);
    mud->setPointers(stalagmites, bear, stalagmites, bear);
    bear->setPointers(main, NULL, mud, dark);
    dark->setPointers(main, bear, main, main);
    crawl->setPointers(NULL, stalagmites, NULL, NULL);
    
    /* location pointer */
    current = main;
    
    exitGame = false;
    isBearThere = true;
}

/************************************************************************
 ** Function: Cave Destructor
 ** Description: This function frees the memory of the Cavern object
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: deletes Cavern object
 ************************************************************************/
Cave::~Cave()
{
    /* If game exited before cave is found */
    if(!addedCave && !blockedCave)
    {
        delete main;
        delete mud;
        delete stalagmites;
        delete bear;
        delete dark;
        delete crawl;
    }
    
    /* If game exited before cave blocked */
    if(addedCave && !blockedCave)
    {
        delete main;
        delete mud;
        delete stalagmites;
        delete bear;
        delete dark;
        delete crawl;
        delete lake;
        delete treasure;
    }
 
    /* If game exited after cave blocked */
    if(addedCave && blockedCave)
    {
        delete lake;
        delete treasure;

    }
}

/************************************************************************
 ** Function: walking()
 ** Description: This function moves player through cave
 ** Parameters: character
 ** Preconditions: valid character
 ** Postconditions: moves current pointer
 ************************************************************************/
bool Cave::walking(char direction)
{
    bool moved = true;
    
    /* Check whether the user is leaving */
    if(current == main && direction == 78)
    {
        cout << "You haven’t found your roommmate yet!\n";
        cout << "Are you sure you want to leave the cave? Ascending will exit program.\n";
        cout << "Enter 'y' or 'n': ";
        char leaving;
        cin >> leaving;
        leaving = toupper(leaving);
        
        /* User Validation */
        while (leaving != 89 && leaving != 78)
        {
            cout << "Please enter 'y' or 'n': ";
            cin >> leaving;
            leaving = toupper(leaving);
        }
        
        /* If No */
        if (leaving == 78)
        {
            cout << "Keep going!  Your roommate's down here somewhere.\n\n";
            moved = false;
        }
        
        else
        {
            cout << "\nYou decide it's best to leave and get help.  You ascend the rope\n";
            cout << "quickly and start the long walk to town.  Good luck and come back soon!\n";
            exitGame = true;
        }
    }
    
    /* If current is lake and direction is south */
    else if (current == lake && direction == 83)
    {
        cout << "You land on the opposite shore and see what looks like a passageway up!\n";
        cout << "Are you ready to leave the cave? Ascending will exit program.\n";
        cout << "Enter 'y' or 'n': ";
        char leaving;
        cin >> leaving;
        leaving = toupper(leaving);
        
        /* User validation */
        while (leaving != 89 && leaving != 78)
        {
            cout << "Please enter 'y' or 'n': ";
            cin >> leaving;
            leaving = toupper(leaving);
        }
        
        /* If yes */
        if (leaving == 89)
        {
            if(hasTreasure)
                displayEndSeq(2);
            else
                displayEndSeq(1);
        
            exitGame = true;
        }
        
        else
        {
            cout << "You decide to continue exploring the cave and paddle back into the middle of the lake\n";
            moved = false;
        }
    }
    
    /* If not exiting game */
    else if (!exitGame)
    {
        string oldRoom = current->getName();
        
        /* Traveling East */
        if(direction == 69 && current->getEast() != NULL)
        {
            /* Check if in the Stalgmite Room trying to cross room*/
            if(oldRoom == "Stalagmite Room" && current->getSide() != 'e')
            {
                cout << "           You can't walk across\n";
                moved = false;
            }
            
            /* If not in Stalagmite Room or walking out of the room proceed */
            else
            {
                current = current->getEast();
                moved = true;
            }
            
            /* If going into the Stalagmite Room */
            if (current == stalagmites && oldRoom == "Mud Room")
            {
                current->setSide('e');
            }
            if(current == stalagmites && oldRoom == "Main Room")
            {
                current->setSide('w');
            }
        }
        
        /* Traveling West */
        else if(direction == 87 && current->getWest() != NULL)
        {
            /* Check if in the Stalgmite Room trying to cross room*/
            if(oldRoom == "Stalagmite Room" && current->getSide() != 'w')
            {
                cout << "You can't walk across\n";
                moved = false;
            }
            
            /* If not in Stalagmite Room or walking out of the room proceed */
            else
            {
                current = current->getWest();
                moved = true;
            }
        }
        
        /* Traveling North */
        else if(direction == 78 && current->getNorth() != NULL)
        {
            /* Check if in the Stalgmite Room trying to cross room*/
            if(oldRoom == "Stalagmite Room" && current->getSide() != 'n')
            {
                cout << "You can't walk across\n";
                moved = false;
            }
            
            /* If not in Stalagmite Room or walking out of the room proceed */
            else
            {
                current = current->getNorth();
                moved = true;
            }
            
            /* If going into the Stalagmite Room */
            if (current == stalagmites && oldRoom == "Mud Room")
            {
                current->setSide('s');
            }
        }
        
        /* Traveling South */
        else if(direction == 83 && current->getSouth() != NULL)
        {
            /* Check if in the Stalgmite Room trying to cross room*/
            if(oldRoom == "Stalagmite Room" && current->getSide() != 's')
            {
                cout << "You can't walk across\n";
                moved = false;
            }
            
            /* If not in Stalagmite Room or walking out of the room proceed */
            else
            {
                current = current->getSouth();
                moved = true;
            }
            
             /* If going into the Stalagmite Room */
            if (current == stalagmites && oldRoom == "Crawlspace")
            {
                current->setSide('n');
            }
        }
        
        /* While bear is in passage */
        else if (current == bear && current->getSouth() == NULL)
        {
            cout << "       Are you crazy? There's a bear blocking the way.\n";
            cout << "If you want to go that way you'll have to get the bear to move\n";
            moved = false;
        }
        
        /* Before cave blocked */
        else if (current == lake && !blockedCave && direction != 78)
        {
            cout << "\nYou'll need a boat to go that way\n";
            moved = false;
        }
        
        /* Once cave blocked */
        else if (current == lake && blockedCave && direction == 78)
        {
                cout << "       The bear is still blocking the entrace.\n";
                moved = false;
        }
        
        else
        {
            cout << "       The space gets too small.  You have to turn around\n";
            moved = false;
        }
    }
    
    return moved;
}

/************************************************************************
 ** Function: roomIntro()
 ** Description: This function displays the Room Introduction messages
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: displays message
 ************************************************************************/
void Cave::roomIntro()
{
    cout << "                   Now in: " << current->getName() << endl;
    cout << endl;
    current->getText();
    cout << endl;

}

/************************************************************************
 ** Function: doAction()
 ** Description: This function calls the action function of the room
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: none
 ************************************************************************/
string Cave::doAction()
{
    string performed = current->action();
    
    if(performed == "bearGone")
    {
        bear->setBear(false);
        performed = "\0";
        findCave();
    }
    
    if(performed == "blockCave")
    {
        caveBlocked();
        performed = "\0";
    }
    
    if(performed == "treasure")
    {
        hasTreasure = true;
    }
    
    return performed;
}

/************************************************************************
 ** Function: getExit()
 ** Description: This function returns the exitGame bool
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns bool
 ************************************************************************/
bool Cave::getExit()
{
    return exitGame;
}

/************************************************************************
 ** Function: getReqItem()
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns string
 ************************************************************************/
string Cave::getReqItem()
{
    return current->getreqItem();
}


/************************************************************************
 ** Function: setHasReq(bool foundItem)
 ** Parameters: bool
 ** Preconditions: valid bool
 ** Postconditions: sets hasReqItem bool of current room
 ************************************************************************/
void Cave::setHasReq(bool foundItem)
{
    current->setHasReqItem(foundItem);
}


/************************************************************************
 ** Function: findCave()
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: Create the rest of the cave structure
 ************************************************************************/
void Cave::findCave()
{
    /* Create Rooms */
    lake = new Lake("Lake Room", "\0", "shovel");
    treasure = new Treasure("Treasure Room", "\0", "\0");
    
    /* Set Pointers */
    bear->setPointers(main, lake, mud, dark);
    lake->setPointers(bear, NULL, NULL, NULL);
    treasure->setPointers(NULL, NULL, lake, NULL);
    
    /* Set bool */
    addedCave = true;
}


/************************************************************************
 ** Function: blockedCave()
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: Destroy the cave structure
 ************************************************************************/
void Cave::caveBlocked()
{
    delete main;
    delete mud;
    delete stalagmites;
    delete bear;
    delete dark;
    delete crawl;
    
    blockedCave = true;
    
    lake->setPointers(NULL, NULL, NULL, treasure);
    
}
