/*******************************************************************
 **  Filename: lake.cpp
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the Lake implementation file
 **  Input:strings
 **  Output:
 *******************************************************************/

#include "cavern.h"
#include "lake.h"
#include "text.h"

#include <iostream>

using std::cin;
using std::cout;

/************************************************************************
 ** Function: Lake Constructor
 ** Description: This function creates the Lake object
 ** Parameters: none
 ** Preconditions: valid strings
 ** Postconditions: creates Lake object
 ************************************************************************/
Lake::Lake(string cavernName, string cavernItem, string reqItem)
: Cavern(cavernName, cavernItem, reqItem)
{
    blocked = false;
}

/************************************************************************
 ** Function: Lake Destructor
 ** Description: This function frees the memory of the Lake object
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: deletes Lake object
 ************************************************************************/
Lake::~Lake()
{
    //std::cout << "destroying Lake" << std::endl;
}

/************************************************************************
 ** Function: getText
 ** Description: This function sets the text of the Lake object
 ** Parameters: string
 ** Preconditions: valid string
 ** Postconditions: sets text attribute
 ************************************************************************/
void Lake::getText()
{
    if(!blocked)
        displayFindCave();
    /* If first time in room */
    if(firstTime)
    {
        displayLake();
        firstTime = false;
    }
    if(blocked)
        displayBoat();
}


/************************************************************************
 ** Function: action
 ** Description: This is the action function of Lake.  The action
 ** allows user to climb back out and ask if user wants to quit game.
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns string
 ************************************************************************/
string Lake::action()
{
    string lakeAction = "\0";
    
    if (hasReqItem && !blocked)
    {
        char choice;
        cout << " \"You brought the shovel right? Are you ready?\" he asks you.\n";
        cout << "1. Let's do this!\n";
        cout << "2. Not yet\n";
        cin >> choice;
        
        /* User validation */
        while(choice != 49 && choice != 50)
        {
            cout << "Please enter 1 or 2\n";
            cin >> choice;
        }
        
        /* If ready */
        if(choice == 49)
        {
            cout << "\"Hop aboard! The shovel will make a perfect paddle.\"\n";
            displayPaddle();
            lakeAction = "blockCave";
            blocked = true;
        }
        
        /* If need more time */
        if(choice == 50)
        {
            cout << "\"Ok come back when you're ready to go\"\n";
        }

    }
    if(!hasReqItem)
    {
        cout << "\"Ahoy!\" Your roommmate calls.  \"Grab the shovel so we can set sail\"\n";
    }
    return lakeAction;
}
