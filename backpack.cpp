/*******************************************************************
 **  Filename: backpack.cpp
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the Backpack implementation file
 **  Input:strings
 **  Output:
 *******************************************************************/

#include "backpack.h"
#include <iostream>

using std::cout;
using std::cin;

/************************************************************************
 ** Function: Backpack Constructor
 ** Description: This function creates an empty array of strings
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: creates any empty array of strings
 ************************************************************************/
Backpack::Backpack()
{
    
    for (int count = 0; count < 3; count++)
    {
        baggedItems[count] = '\0';
    }
    
    arrayEnd = 0;
}


/************************************************************************
 ** Function: Backpack Destructor
 ** Description: This function destroys the Backpack object
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: destroys object
 ************************************************************************/
Backpack::~Backpack()
{
}


/************************************************************************
 ** Function: addItem(string element)
 ** Description: This function adds item to the backpack
 ** Parameters: string
 ** Preconditions: valid string
 ** Postconditions: adds item to array and increases arrayEnd
 ************************************************************************/
void Backpack::addItem (string element)
{
    if(arrayEnd < 3)
    {
        baggedItems[arrayEnd] = element;
        arrayEnd++;
    }
    else
        cout << "Bag is full.\n";
}


/************************************************************************
 ** Function: displayItems()
 ** Description: This function displays items in the backpack
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: display all items in backpack and remove item
 ************************************************************************/
void Backpack::displayItems()
{
    cout << "\n     Your Backpack\n";
    cout << "--------------------------------\n";
    for (int count = 0; count < arrayEnd; count++)
    {
        if (baggedItems[count] != "\0")
        {
            cout << count + 1 << "." << baggedItems[count] << "\n";
        }
    }
        cout << "\n\n\nPress any key to return to game\n";
        
        char ch;
        cin.ignore(100, '\n');
        cin.get(ch);
}
        

/************************************************************************
 ** Function: checkForReqItem(string requiredItem)
 ** Description: This function searches items in the backpack for reqired
 ** item in room
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns bool of whether item is in backpack
 ************************************************************************/
bool Backpack::checkForReqItem(string requiredItem)
{
    bool found = false;

    if(requiredItem != "\0")
    {
        for (int count = 0; count < arrayEnd; count++)
        {
            if(baggedItems[count] == requiredItem)
            {
                found = true;
            }
        }
    }
    
    return found;
}
        
