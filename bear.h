/*******************************************************************
 **  Filename: bear.h
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the BearRoom header file which is a derived
 **  class of Cavern
 **  Input: strings
 **  Output:
 *******************************************************************/

#include <string>

#ifndef BEARROOM_H
#define BEARROOM_H

using std::string;

class BearRoom : public Cavern
{
private:
    
public:
    BearRoom(string cavernName,string cavernItem, string reqItem);
    virtual ~BearRoom();
    virtual void getText();
    virtual string action();
};

#endif