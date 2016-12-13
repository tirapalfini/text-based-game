/*******************************************************************
 **  Filename: treasure.cpp
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the Treasure implementation file
 **  Input:strings
 **  Output:
 *******************************************************************/

#include "cavern.h"
#include "treasure.h"
#include "text.h"

#include <iostream>
using std::cin;
using std::cout;

/************************************************************************
 ** Function: Treasure Constructor
 ** Description: This function creates the Treasure object
 ** Parameters: none
 ** Preconditions: valid strings
 ** Postconditions: creates Treasure object
 ************************************************************************/
Treasure::Treasure(string cavernName, string cavernItem, string reqItem)
: Cavern(cavernName, cavernItem, reqItem)
{
}

/************************************************************************
 ** Function: Treasure Destructor
 ** Description: This function frees the memory of the Treasure object
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: deletes Treasure object
 ************************************************************************/
Treasure::~Treasure()
{
    //std::cout << "destroying Treasure" << std::endl;
}

/************************************************************************
 ** Function: setText
 ** Description: This function sets the text of the Treasure object
 ** Parameters: string
 ** Preconditions: valid string
 ** Postconditions: sets text attribute
 ************************************************************************/
void Treasure::getText()
{
    if(itemInRoom)
        displayTreasure(1);
    
    else
        displayTreasure(2);
}


/************************************************************************
 ** Function: action
 ** Description: This is the action function of Treasure.  The action
 ** allows user to climb back out and ask if user wants to quit game.
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns string
 ************************************************************************/
string Treasure::action()
{
    string treasure = "\0";
    if(itemInRoom)
    {
        char choice;
        cout << "\nDo you take the treasure?\n";
        cout << "1. Of course!\n";
        cout << "2. Nah\n";
    
        cin >> choice;
        while (choice != 49 && choice!= 50)
        {
            cout << "Please enter 1 or 2\n";
            cin >> choice;
        }
        if (choice == 49)
        {
            displayTookTreasure(1);
            treasure = "treasure";
            item = "\0";
            itemInRoom = false;
        }
        if (choice == 50)
        {
            displayTookTreasure(2);
        }
    }
    
    return treasure;
}
