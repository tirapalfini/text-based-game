/*******************************************************************
 **  Filename: lake.h
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the Lake header file which is a derived
 **  class of Cavern
 **  Input: strings
 **  Output:
 *******************************************************************/

#include <string>

#ifndef LAKE_H
#define LAKE_H

using std::string;

class Lake : public Cavern
{
private:
    bool blocked;
    
public:
    Lake(string cavernName,string cavernItem, string reqItem);
    virtual ~Lake();
    virtual void getText();
    virtual string action();
};

#endif