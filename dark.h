/*******************************************************************
 **  Filename: dark.h
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the DarkRoom header file which is a derived
 **  class of Cavern
 **  Input: strings
 **  Output:
 *******************************************************************/

#include <string>

#ifndef DARKROOM_H
#define DARKROOM_H

using std::string;

class DarkRoom : public Cavern
{
private:
    bool doritosEaten;
    
public:
    DarkRoom(string cavernName,string cavernItem, string reqItem);
    virtual ~DarkRoom();
    virtual void getText();
    virtual string action();
};

#endif