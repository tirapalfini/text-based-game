/*******************************************************************
 **  Filename: cavern.cpp
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the cavern implementation file which is
 **  the abstract base class
 **  Input:
 **  Output:
 *******************************************************************/

#include "cavern.h"
#include <iostream>

/************************************************************************
 ** Function: Cavern Constructor
 ** Description: This function creates the cavern object
 ** Parameters: none
 ** Preconditions: valid strings
 ** Postconditions: creates cavern object
 ************************************************************************/
Cavern::Cavern(string cavernName, string cavernItem, string reqItem)
{
    setName(cavernName);
    setItem(cavernItem);
    firstTime = true;
    hasReqItem = false;
    side = '\0';
    itemInRoom = true;
    this->reqItem = reqItem;
    bearThere = true;
}

/************************************************************************
 ** Function: Cavern Destructor
 ** Description: This function frees the memory of the Cavern object
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: deletes Cavern object
 ************************************************************************/
Cavern::~Cavern()
{
    //std::cout << "destroying cavern" << std::endl;
}

/************************************************************************
 ** Function: setName
 ** Description: This function sets the name of the Cavern object
 ** Parameters: string
 ** Preconditions: valid string
 ** Postconditions: sets name atttribute
 ************************************************************************/
void Cavern::setName(string cavernName)
{
    name = cavernName;
}

/************************************************************************
 ** Function: setItem
 ** Description: This function sets the item of the Cavern object
 ** Parameters: string
 ** Preconditions: valid string
 ** Postconditions: sets item attribute
 ************************************************************************/
void Cavern::setItem(string cavernItem)
{
    item = cavernItem;
}

/************************************************************************
 ** Function: setPointers
 ** Description: This function sets all the pointers of the Cavern object
 ** Parameters: pointers
 ** Preconditions: valid pointer
 ** Postconditions: sets all the pointer attributes
 ************************************************************************/
void Cavern::setPointers(Cavern *ptrN, Cavern *ptrS, Cavern *ptrE,
                         Cavern *ptrW)
{
    north = ptrN;
    south = ptrS;
    east = ptrE;
    west = ptrW;
}

/************************************************************************
 ** Function: getName
 ** Description: This function gets the name of the Cavern object
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns string
 ************************************************************************/
string Cavern::getName()
{
    return name;
}

/************************************************************************
 ** Function: getText
 ** Description: This function gets the text of the Cavern object
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns string
 ************************************************************************/
void Cavern::getText()
{
    std::cout << "You shouldn't see this";
}

/************************************************************************
 ** Function: getItem
 ** Description: This function gets the item of the Cavern object
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: return string
 ************************************************************************/
string Cavern::getItem()
{
    return item;
}

/************************************************************************
 ** Function: getFirstTime
 ** Description: This function gets the firstTime bool of the Cavern object
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns bool
 ************************************************************************/
bool Cavern::getFirstTime()
{
    return firstTime;
}

/************************************************************************
 ** Function: getNorth
 ** Description: This function gets the north pointer
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns pointer
 ************************************************************************/
Cavern *Cavern::getNorth()
{
    return north;
}

/************************************************************************
 ** Function: getSouth
 ** Description: This function gets the south pointer
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns pointer
 ************************************************************************/
Cavern *Cavern::getSouth()
{
    return south;
}

/************************************************************************
 ** Function: getEast
 ** Description: This function gets the east pointer
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns pointer
 ************************************************************************/
Cavern *Cavern::getEast()
{
    return east;
}

/************************************************************************
 ** Function: getWest
 ** Description: This function gets the west pointer
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns pointer
 ************************************************************************/
Cavern *Cavern::getWest()
{
    return west;
}

/************************************************************************
 ** Function: checkItem
 ** Description: This function checks to see whether the user's bag 
 ** contains a specific item
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns bool
 ************************************************************************/
bool Cavern::checkItem()
{
    return hasReqItem;
}

/************************************************************************
 ** Function: setSide(char sideOfRoom)
 ** Description: This function sets the side of the room (used in
 ** Stalagemite Room
 ** Parameters: character
 ** Preconditions: valid character
 ** Postconditions: none
 ************************************************************************/
void Cavern::setSide(char sideOfRoom)
{
    side = sideOfRoom;
}

/************************************************************************
 ** Function: getSide
 ** Description: This function gets the side of the room (used in
 ** Stalagemite Room
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns char
 ************************************************************************/
char Cavern::getSide()
{
    return side;
}


/************************************************************************
 ** Function: getreqItem()
 ** Description: This function gets req item
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: returns string
 ************************************************************************/
string Cavern::getreqItem()
{
    return reqItem;
}


/************************************************************************
 ** Function: setHasReqItem
 ** Description: This function sets the hasReqItem bool
 ** Parameters: bool
 ** Preconditions: valid bool
 ** Postconditions: set hasReqItem
 ************************************************************************/
void Cavern::setHasReqItem(bool didFind)
{
    hasReqItem = didFind;
}

/************************************************************************
 ** Function: setBear(bool bearGone)
 ** Description: This function sets the bearThere bool
 ** Parameters: bool
 ** Preconditions: valid bool
 ** Postconditions: set bearThere
 ************************************************************************/
void Cavern::setBear(bool bearGone)
{
    bearThere = bearGone;
}
