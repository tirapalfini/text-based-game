/*******************************************************************
 **  Filename: backpack.cpp
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the backpack header file
 **  Input: strings
 **  Output: strings
 *******************************************************************/

#ifndef BACKPACK_h
#define BACKPACK_h

#include <string>
using std::string;

class Backpack
{
    private:
    string baggedItems[3];
    int arrayEnd;
    
    public:
    Backpack();
    ~Backpack();
    void addItem (string element);
    void displayItems();
    bool checkForReqItem(string reqiredItem);
};


#endif
