/*******************************************************************
 **  Filename: cavern.h
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the cavern header file which is the abstract
 **  base class
 **  Input:
 **  Output:
 *******************************************************************/

#include <string>

#ifndef CAVERN_H
#define CAVERN_H

using std::string;

class Cavern
{
protected:
    string name;
    string item;
    Cavern *north;
    Cavern *south;
    Cavern *east;
    Cavern *west;
    bool firstTime;
    bool hasReqItem;
    char side;
    bool itemInRoom;
    string reqItem;
    bool bearThere;
    
public:
    Cavern(string cavernName,string cavernItem, string reqItem);
    virtual ~Cavern();
    void setName(string cavernName);
    void setItem(string cavernItem);
    void setPointers(Cavern *ptrN, Cavern *ptrS, Cavern *ptrE, Cavern *prtW);
    string getName();
    virtual void getText();
    string getItem();
    bool getFirstTime();
    Cavern *getNorth();
    Cavern *getSouth();
    Cavern *getEast();
    Cavern *getWest();
    virtual string action() = 0;
    bool checkItem();
    void setSide(char sideOfRoom);
    char getSide();
    string getreqItem();
    void setHasReqItem(bool didFind);
    void setBear(bool bearGone);
};

#endif