/*******************************************************************
 **  Filename: crawl.cpp
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the CrawlSpace implementation file
 **  Input:strings
 **  Output:
 *******************************************************************/

#include "cavern.h"
#include "crawl.h"
#include "text.h"

#include <iostream>
using std::cin;
using std::cout;

/************************************************************************
 ** Function: CrawlSpace Constructor
 ** Description: This function creates the CrawlSpace object
 ** Parameters: none
 ** Preconditions: valid strings
 ** Postconditions: creates CrawlSpace object
 ************************************************************************/
CrawlSpace::CrawlSpace(string cavernName, string cavernItem, string reqItem)
: Cavern(cavernName, cavernItem, reqItem)
{
}

/************************************************************************
 ** Function: CrawlSpace Destructor
 ** Description: This function frees the memory of the CrawlSpace object
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: deletes CrawlSpace object
 ************************************************************************/
CrawlSpace::~CrawlSpace()
{
    //std::cout << "destroying CrawlSpace" << std::endl;
}

/************************************************************************
 ** Function: setText
 ** Description: This function sets the text of the CrawlSpace object
 ** Parameters: string
 ** Preconditions: valid string
 ** Postconditions: sets text attribute
 ************************************************************************/
void CrawlSpace::getText()
{
    displayCrawlspace();
}


/************************************************************************
 ** Function: action
 ** Description: This is the action function of CrawlSpace.  The action
 ** allows user to climb back out and ask if user wants to quit game.
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns string
 ************************************************************************/
string CrawlSpace::action()
{
    string actionItem = "\0";
    
    /* If the flashlight is in the room */
    if(itemInRoom)
    {
        displayFlashlight();
        char takeFlashlight;
        cin >> takeFlashlight;
        while(takeFlashlight != 49 && takeFlashlight != 50)
        {
            cout << "Please enter 1 or 2\n";
            cin >> takeFlashlight;
        }
        
        /* If you decide to take the flashlight */
        if(takeFlashlight == 49)
        {
            cout << "Having found another reason to yell at your roommate\n";
            cout << "when you find him, you click on the light and continue\n";
            cout << "along the passageway.\n";
            actionItem = item;
            item = "\0";
            itemInRoom = false;
        }
        
        /* If you decide not to take the flashlight */
        if(takeFlashlight == 50)
        {
            cout << "Sure you're in a dark cave and the flashlight would come\n";
            cout << "in handy...but you like a challenge. You know where the\n";
            cout << "flashlight is if you need it later.\n";
        }
    }
    
    return actionItem;
}
