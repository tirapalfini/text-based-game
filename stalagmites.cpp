/*******************************************************************
 **  Filename: stalagmites.cpp
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the Stalagmites implementation file
 **  Input:strings
 **  Output:
 *******************************************************************/

#include "cavern.h"
#include "stalagmites.h"
#include "text.h"

#include <iostream>

using std::cout;
using std::cin;

/************************************************************************
 ** Function: Stalagmites Constructor
 ** Description: This function creates the Stalagmites object
 ** Parameters: none
 ** Preconditions: valid strings
 ** Postconditions: creates Stalagmites object
 ************************************************************************/
Stalagmites::Stalagmites(string cavernName, string cavernItem, string reqItem)
: Cavern(cavernName, cavernItem, reqItem)
{
    ropeSide = 'e';
}

/************************************************************************
 ** Function: Stalagmites Destructor
 ** Description: This function frees the memory of the Stalagmites object
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: deletes Stalagmites object
 ************************************************************************/
Stalagmites::~Stalagmites()
{
    //std::cout << "destroying Stalagmites" << std::endl;
}

/************************************************************************
 ** Function: setText
 ** Description: This function sets the text of the Stalagmites object
 ** Parameters: string
 ** Preconditions: valid string
 ** Postconditions: sets text attribute
 ************************************************************************/
void Stalagmites::getText()
{
    bool sameSide = false;
    
    if (side == ropeSide)
        sameSide = true;
    
    if(firstTime && !sameSide)
    {
        displayStalagmites(1);
        firstTime = false;
    }
    
    else if (firstTime && sameSide)
    {
        displayStalagmites(2);
        firstTime = false;
    }
    
    else if (!firstTime && sameSide)
        displayStalagmites(3);
    
    else
        displayStalagmites(4);
    
}


/************************************************************************
 ** Function: action
 ** Description: This is the action function of Stalagmites.  The action
 ** allows user to climb back out and ask if user wants to quit game.
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns string
 ************************************************************************/
string Stalagmites::action()
{
    if(side == ropeSide)
    {
        cout << "Do you want to swing across?\n";
        
        /* If on the north side */
        if(side == 'n')
        {
            char swing;
            cout << "Swing to east? Press 'e'\n";
            cout << "Swing to west? Press 'w'\n";
            cout << "Swing to south? Press 's'\n";
            cout << "Enter any other key to stay here\n";
            cin >> swing;
            swing = toupper(swing);
            if (swing == 69 || swing == 87 || swing == 83)
                cout << "                   Yipppppeeeeeeee!\n";
            else
                cout << "       You decide your happy staying on the ground\n";
            if (swing == 69)
            {
                side = 'e';
                ropeSide = 'e';
            }
            if (swing == 87)
            {
                side = 'w';
                ropeSide = 'w';
            }
            if (swing == 83)
            {
                side = 's';
                ropeSide = 's';
            }
        }
        
        /* If on the west side */
        else if(side == 'w')
        {
            char swing;
            cout << "Swing to east? Press 'e'\n";
            cout << "Swing to north? Press 'n'\n";
            cout << "Swing to south? Press 's'\n";
            cout << "Enter any other key to stay here\n";
            cin >> swing;
            swing = toupper(swing);
            if (swing == 69 || swing == 78 || swing == 83)
                cout << "                   Yipppppeeeeeeee!\n";
            else
                cout << "       You decide your happy staying on the ground\n";
            if (swing == 69)
            {
                side = 'e';
                ropeSide = 'e';
            }
            if (swing == 78)
            {
                side = 'n';
                ropeSide = 'n';
            }
            if (swing == 83)
            {
                side = 's';
                ropeSide = 's';
            }
        }
        
        /* If on the south side */
        else if(side == 's')
        {
            char swing;
            cout << "Swing to east? Press 'e'\n";
            cout << "Swing to north? Press 'n'\n";
            cout << "Swing to west? Press 'w'\n";
            cout << "Enter any other key to stay here\n";
            cin >> swing;
            swing = toupper(swing);
            if (swing == 69 || swing == 78 || swing == 87)
                cout << "                   Yipppppeeeeeeee!\n";
            else
                cout << "       You decide your happy staying on the ground\n";
            if (swing == 69)
            {
                side = 'e';
                ropeSide = 'e';
            }
            if (swing == 78)
            {
                side = 'n';
                ropeSide = 'n';
            }
            if (swing == 87)
            {
                side = 'w';
                ropeSide = 'w';
            }
        }
        
        /* If on the east side */
        else if(side == 'e')
        {
            char swing;
            cout << "Swing to south? Press 's'\n";
            cout << "Swing to north? Press 'n'\n";
            cout << "Swing to west? Press 'w'\n";
            cout << "Enter any other key to stay here\n";
            cin >> swing;
            swing = toupper(swing);
            if (swing == 83 || swing == 78 || swing == 87)
                cout << "                   Yipppppeeeeeeee!\n";
            else
                cout << "       You decide your happy staying on the ground\n";
            if (swing == 83)
            {
                side = 's';
                ropeSide = 's';
            }
            if (swing == 78)
            {
                ropeSide = 'n';
                side = 'n';
            }
            if (swing == 87)
            {
                side = 'w';
                ropeSide = 'w';
            }
        }
    }
        /* Display your location */
        string yourSide;
        if (side == 'e')
            yourSide = "east";
        if (side == 'w')
            yourSide = "west";
        if (side == 's')
            yourSide = "south";
        if (side == 'n')
            yourSide = "north";
        cout << "\n          You are on the " << yourSide  << " side of the room\n";
    
        /* Display rope location */
        string rope;
        if (ropeSide == 'e')
            rope = "east";
        if (ropeSide == 's')
            rope = "south";
        if (ropeSide == 'n')
            rope = "north";
        if (ropeSide == 'w')
            rope = "west";
        cout << "\n           Rope is on the " << rope << " side of the room\n";

    return "\0";
}
