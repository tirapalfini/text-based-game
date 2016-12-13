/*******************************************************************
 **  Filename: stalagmites.h
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the Stalagmites header file which is a derived
 **  class of Cavern
 **  Input: strings
 **  Output:
 *******************************************************************/

#include <string>

#ifndef STALAGMITES_H
#define STALAGMITES_H

using std::string;

class Stalagmites : public Cavern
{
private:
    char ropeSide;
    
public:
    Stalagmites(string cavernName,string cavernItem, string reqItem);
    virtual ~Stalagmites();
    virtual void getText();
    virtual string action();
};

#endif