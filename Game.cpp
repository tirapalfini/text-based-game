/*******************************************************************
**  Filename: Game.cpp
**  Author: Tira Wickland
**  Date: July 28th, 2016
**  Description: This is the Game file of the final project program
**  Input: characters
**  Output: display text
*******************************************************************/

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
#include "caveSystem.h"
#include "backpack.h"
#include "menu.h"
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main ()
{
    char game;
    
    /* Display menu options */
    do
    {
        displayMenu();
        cin >> game;
        
    if(game == 50)
    {
        displayHowToWin();
        cin.ignore(100, '\n');
        char ch;
        cin.get(ch);
    }
        
    if(game == 49)
    {
        displayIntro();
    
        char ch;
        cin.ignore(100, '\n');
        cin.get(ch);

        cout << "\n";
        displayIntro2();
    
        char choice1;
    
        cout << "Do you... (Please enter a number) \n";
        cout << "1. Do you descend into the unknown?\n";
        cout << "2. Drive back for help?\n";
    
        cin >> choice1;
        while (choice1 != 49 && choice1!= 50)
        {
            cout << "Please enter 1 or 2\n";
            cin >> choice1;
        }
    
        if (choice1 == 49)
        {
            cout << "Onward!\n";
        }
    
        if (choice1 == 50)
        {
            noTurningBack();
            cin.ignore(100, '\n');
            cin.get(ch);
        }
        cout << endl;
    
        int counter = 0;
    
        /* Create cave structure */
        Cave myAdventure;
        
        /* Create backpack */
        Backpack myBag;
    
        cout << "\n       You slide down the rope into the dark cave\n\n";
    
        //myAdventure.roomIntro();
        bool leftRoom = true;
    
        do
        {
            string itemAction = "\0";
        
            if(leftRoom)
            {
                /* Display Room */
                myAdventure.roomIntro();
        
                /* Check if you have required item */
                string req = myAdventure.getReqItem();
                bool found = myBag.checkForReqItem(req);
                myAdventure.setHasReq(found);
            
                /* Do action in room */
                itemAction = myAdventure.doAction();
                if(itemAction != "\0")
                    myBag.addItem(itemAction);
            }
        
            cout << "\n            Where to next? North, South, East, or West\n";
            cout << "         Use 'n', 's', 'e', or 'w' to navigate the caves\n";
            cout << "                   Enter 'm' to look at map\n";
            cout << "                   Enter 'b' to look in bag\n";
        
            char direction;
            cin >> direction;
        
            direction = toupper(direction);
            
            /* User validation */
            while (direction != 78 && direction != 83 && direction != 77 && direction != 66
                               && direction != 69 && direction != 87)
            {
                cout << "Please navigate with the 'n', 's', 'e', 'w', or enter 'm' or 'b' ";
                cin >> direction;
                direction = toupper(direction);
            }
        
            cout << endl;
        
            /* Display Map */
            if (direction == 77)
            {
                displayMap();
                cout << "        Press any key to continue\n";
                cin.ignore(100, '\n');
                char keepWalking;
                cin.get(keepWalking);
                leftRoom = false;
            }
        
            /* Display Bag */
            else if(direction == 66)
            {
                myBag.displayItems();
                leftRoom = false;
            }
        
            /* Travel */
            else
            {
                leftRoom = myAdventure.walking(direction);
            }
            
            if (leftRoom)
                counter++;
            
            cout << "\n\n\n";
            if (counter == 15)
            {
                cout << "\nYou notice the light in the cave is getting dimmer.\n";
                cout << "Checking your watch you see it's late afternoon.\n";
                cout << "Better find your roommate before the sun goes down!\n\n";
            }
            
        /* Continue loop while still playing game */
        }while(!myAdventure.getExit() && counter < 25);
        
        /* If time is up */
        if(counter == 25)
        {
            cout << "\nYou enter the next room, but can't see anything.\n";
            cout << "The sun has set and time is up. It's time to leave and get help.\n";
            cout << "Carefully, you feel your way back to the main cavern\n";
            cout << "\nYou ascend the rope quickly and start the long walk to town.\n";
            cout << "Good luck and come back soon!\n";
        }
    
        cout << "\n                   Thank You For Playing\n";
        }
    }while(game != 51);
    cout << "\n                             Goodbye\n";
    return 0;
}