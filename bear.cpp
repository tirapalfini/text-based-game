/*******************************************************************
 **  Filename: bear.cpp
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the BearRoom implementation file
 **  Input:strings
 **  Output:
 *******************************************************************/

#include "cavern.h"
#include "bear.h"
#include "text.h"

#include <iostream>

using std::cout;
using std::cin;

/************************************************************************
 ** Function: BearRoom Constructor
 ** Description: This function creates the BearRoom object
 ** Parameters: none
 ** Preconditions: valid strings
 ** Postconditions: creates BearRoom object
 ************************************************************************/
BearRoom::BearRoom(string cavernName, string cavernItem, string reqItem)
: Cavern(cavernName, cavernItem, reqItem)
{
}

/************************************************************************
 ** Function: BearRoom Destructor
 ** Description: This function frees the memory of the BearRoom object
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: deletes BearRoom object
 ************************************************************************/
BearRoom::~BearRoom()
{
    //std::cout << "destroying BearRoom" << std::endl;
}

/************************************************************************
 ** Function: setText
 ** Description: This function sets the text of the BearRoom object
 ** Parameters: string
 ** Preconditions: valid string
 ** Postconditions: sets text attribute
 ************************************************************************/
void BearRoom::getText()
{
    if(firstTime && !hasReqItem && bearThere)
    {
        displayBear(1);
        firstTime = false;
    }
    
    else if(!firstTime && !hasReqItem && bearThere)
    {
        displayBear(2);
    }
    if(!bearThere)
    {
        cout << "You return to the bear cavern, now missing the big bear. At last!\n";
    }
        
}


/************************************************************************
 ** Function: action
 ** Description: This is the action function of BearRoom.
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns string
 ************************************************************************/
string BearRoom::action()
{
    
    if(hasReqItem && bearThere)
    {
        char hitShovel;
        cout << "       You need to see what the bear's blocking.\n";
        cout << "       Clutching the shovel a little tighter you prepare\n";
        cout << "               to disturb the sleeping giant.\n";
        cout << "Do you:\n";
        cout << "1. Hit the bear’s rear with the shovel?\n";
        cout << "2. Bang the shovel against the cave wall?\n";
        
        cin >> hitShovel;
        
        while(hitShovel != 49 && hitShovel != 50)
        {
            cout << "Please enter 1 or 2\n";
            cin >> hitShovel;
        }
        
        /* Hit bear with shovel text */
        if(hitShovel == 49)
        {
            bearShovel(2);
        }
        /* Hit wall with shovel text */
        if(hitShovel == 50)
        {
            bearShovel(3);
        }
            
    }
    
    else if (bearThere)
    {
        /* Don't have shovel text */
        bearShovel(1);
    }
    return "\0";
}


