/*******************************************************************
 **  Filename: treasure.h
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the Treasure header file which is a derived
 **  class of Cavern
 **  Input: strings
 **  Output:
 *******************************************************************/

#include <string>

#ifndef TREASURE_H
#define TREASURE_H

using std::string;

class Treasure : public Cavern
{
private:
    
public:
    Treasure(string cavernName,string cavernItem, string reqItem);
    virtual ~Treasure();
    virtual void getText();
    virtual string action();
};

#endif