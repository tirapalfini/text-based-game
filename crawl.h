/*******************************************************************
 **  Filename: crawl.h
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the CrawlSpace header file which is a derived
 **  class of Cavern
 **  Input: strings
 **  Output:
 *******************************************************************/

#include <string>

#ifndef CRAWLSPACE_H
#define CRAWLSPACE_H

using std::string;

class CrawlSpace : public Cavern
{
private:
    
public:
    CrawlSpace(string cavernName,string cavernItem, string reqItem);
    virtual ~CrawlSpace();
    virtual void getText();
    virtual string action();
};

#endif