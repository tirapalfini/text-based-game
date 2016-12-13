/*******************************************************************
 **  Filename: main.h
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the MainRoom header file which is a derived
 **  class of Cavern
 **  Input: strings
 **  Output:
 *******************************************************************/

#include <string>

#ifndef MAINROOM_H
#define MAINROOM_H

using std::string;

class MainRoom : public Cavern
{
    private:
        bool hasDoneAction;
    
    public:
        MainRoom(string cavernName,string cavernItem, string reqItem);
        virtual ~MainRoom();
        virtual void getText();
        virtual string action();
};

#endif