/*******************************************************************
 **  Filename: dark.cpp
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the DarkRoom implementation file
 **  Input:strings
 **  Output:
 *******************************************************************/

#include "cavern.h"
#include "dark.h"
#include "text.h"

#include <iostream>
using std::cout;
using std::cin;

/************************************************************************
 ** Function: DarkRoom Constructor
 ** Description: This function creates the DarkRoom object
 ** Parameters: none
 ** Preconditions: valid strings
 ** Postconditions: creates DarkRoom object
 ************************************************************************/
DarkRoom::DarkRoom(string cavernName, string cavernItem, string reqItem)
: Cavern(cavernName, cavernItem, reqItem)
{
    doritosEaten = false;
}

/************************************************************************
 ** Function: DarkRoom Destructor
 ** Description: This function frees the memory of the DarkRoom object
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: deletes DarkRoom object
 ************************************************************************/
DarkRoom::~DarkRoom()
{
    //std::cout << "destroying DarkRoom" << std::endl;
}

/************************************************************************
 ** Function: setText
 ** Description: This function sets the text of the DarkRoom object
 ** Parameters: string
 ** Preconditions: valid string
 ** Postconditions: sets text attribute
 ************************************************************************/
void DarkRoom::getText()
{
    if(firstTime)
    {
        displayDark(1);
        firstTime = false;
    }
    
    else
        displayDark(2);
}


/************************************************************************
 ** Function: action
 ** Description: This is the action function of DarkRoom.  The action
 ** allows user to climb back out and ask if user wants to quit game.
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns string
 ************************************************************************/
string DarkRoom::action()
{
    string bear = "\0";
    
    if(hasReqItem && !doritosEaten)
    {
        displayDark(3);
        char choice;
        cin >> choice;
        while (choice != 51 && choice != 52)
        {
            while (choice != 49 && choice!= 50 && choice!= 51 && choice != 52)
            {
                cout << "Please enter 1, 2, 3, or 4\n";
                cin >> choice;
            }
            /* You decide to drink the water */
            if(choice == 49)
            {
                cout << "\nAhhhh refreshing\n";
            }
        
            /* You decide to use the cellphone */
            if(choice == 50)
            {
                cout << "\nYou check the phone. No signal.\n";
            }
            
            /* Repeat user menu */
            displayDark(4);
            cin >> choice;
        }
        
        /* You decide to eat the Doritos */
        if(choice == 51)
        {
            cout << "\nYou decide to eat the Doritos. After all, it's well after lunchtime\n";
            cout << "and your roommate owes you big!\n\n";
            displayDark(5);
            bear = "bearGone";
            doritosEaten = true;
        }
        
        if(choice == 52)
        {
            displayDark(6);
        }
    }
    return bear;
}
