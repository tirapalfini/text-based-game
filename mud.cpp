/*******************************************************************
 **  Filename: mud.cpp
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the mudroom implementation file
 **  Input:strings
 **  Output:
 *******************************************************************/

#include "cavern.h"
#include "mud.h"
#include "text.h"
#include "backpack.h"

#include <iostream>

using std::cout;
using std::cin;

/************************************************************************
 ** Function: MudRoom Constructor
 ** Description: This function creates the MudRoom object
 ** Parameters: none
 ** Preconditions: valid strings
 ** Postconditions: creates MudRoom object
 ************************************************************************/
MudRoom::MudRoom(string cavernName, string cavernItem, string reqItem)
: Cavern(cavernName, cavernItem, reqItem)
{
}

/************************************************************************
 ** Function: MudRoom Destructor
 ** Description: This function frees the memory of the MudRoom object
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: deletes MudRoom object
 ************************************************************************/
MudRoom::~MudRoom()
{
    //std::cout << "destroying MudRoom" << std::endl;
}

/************************************************************************
 ** Function: getText
 ** Description: This function sets the text of the MudRoom object
 ** Parameters: string
 ** Preconditions: valid string
 ** Postconditions: sets text attribute
 ************************************************************************/
void MudRoom::getText()
 {
     /* If shovel is in the room */
     if(itemInRoom)
     {
         displayMud(1);
     }
     
     /* If shovel is not in the room */
     else
         displayMud(2);
 }


/************************************************************************
 ** Function: action
 ** Description: This is the action function of MudRoom.  The action 
 ** displays digging message to user and returns item.
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns string
 ************************************************************************/
string MudRoom::action()
{
    string actionItem = "\0";
    
    if(itemInRoom)
    {
        char choice;
    
        cout << "Do you dig the item out?\n";
        cout << "1. Yes\n";
        cout << "2. No\n";
        cin >> choice;
        while (choice != 49 && choice!= 50)
        {
            cout << "Please enter 1 or 2\n";
            cin >> choice;
        }
        if (choice == 49)
        {
            cout << "\nYou grab hold of the object and pull. Slowly it emerges\n";
            cout << "from the mud. A shovel!  This could come in useful.\n";
            actionItem = item;
            item = "\0";
            itemInRoom = false;
        }
    
        if (choice == 50)
        {
        cout << "\nNot wanting to get your hands dirty, you decide to move on.\n";
        }
    }
    return actionItem;
}
