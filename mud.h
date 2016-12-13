/*******************************************************************
 **  Filename: mud.h
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the MudRoom header file which is a derived
 **  class of Cavern
 **  Input: strings
 **  Output:
 *******************************************************************/

#include <string>

#ifndef MUDROOM_H
#define MUDROOM_H

using std::string;

class MudRoom : public Cavern
{
    private:
    
    public:
        MudRoom(string cavernName,string cavernItem, string reqItem);
        virtual ~MudRoom();
        virtual void getText();
        virtual string action();
};

#endif