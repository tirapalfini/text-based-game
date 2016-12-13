/*******************************************************************
 **  Filename: main.cpp
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the MainRoom implementation file
 **  Input:strings
 **  Output:
 *******************************************************************/

#include "cavern.h"
#include "main.h"
#include "text.h"

#include <iostream>

using std::cout;
using std::cin;

/************************************************************************
 ** Function: MainRoom Constructor
 ** Description: This function creates the MainRoom object
 ** Parameters: none
 ** Preconditions: valid strings
 ** Postconditions: creates MainRoom object
 ************************************************************************/
MainRoom::MainRoom(string cavernName, string cavernItem, string reqItem)
: Cavern(cavernName, cavernItem, reqItem)
{
    hasDoneAction = false;
}

/************************************************************************
 ** Function: MainRoom Destructor
 ** Description: This function frees the memory of the MainRoom object
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: deletes MainRoom object
 ************************************************************************/
MainRoom::~MainRoom()
{
    //std::cout << "destroying MainRoom" << std::endl;
}

/************************************************************************
 ** Function: setText
 ** Description: This function sets the text of the MainRoom object
 ** Parameters: string
 ** Preconditions: valid string
 ** Postconditions: sets text attribute
 ************************************************************************/
void MainRoom::getText()
{
    if(firstTime)
    {
        displayMain(1);
        firstTime = false;
    }
    else
        displayMain(2);
}


/************************************************************************
 ** Function: action
 ** Description: This is the action function of MainRoom.  The action
 ** allows user to shout roommate's name.
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: displays text based on shouting decision
 ************************************************************************/
string MainRoom::action()
{
    if(!hasDoneAction)
    {
        char choice;
        cout << "Do you: \n";
        cout << "1. Shout your roommmate's name\n";
        cout << "2. Remain quiet\n";
        cin >> choice;
        while (choice != 49 && choice!= 50)
        {
            cout << "Please enter 1 or 2\n";
            cin >> choice;
        }
        if (choice == 49)
        {
            displayBats();
        }
        if (choice == 50)
        {
            cout << "\nShout in a strange cave? No way! Who knows what's down here with you.\n";
        }
        
        hasDoneAction = true;
    }
    return "\0";
}
