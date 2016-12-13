/*******************************************************************
 **  Filename: caveSystem.h
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the cave header file.  It manages the 
 **  cave structures and the interactions of the player in the caves
 **  Input:
 **  Output:
 *******************************************************************/

#include "cavern.h"

#ifndef CAVE_h
#define CAVE_h

class Cave
{
    private:
    bool exitGame;
    Cavern *main;
    Cavern *mud;
    Cavern *stalagmites;
    Cavern *bear;
    Cavern *dark;
    Cavern *crawl;
    //Cavern *leavingGame;
    Cavern *current;
    Cavern *lake;
    Cavern *treasure;
    bool isBearThere;
    bool addedCave;
    bool blockedCave;
    bool hasTreasure;
    
    public:
    Cave();
    void findCave();
    void caveBlocked();
    ~Cave();
    bool walking(char direction);
    string doAction();
    void roomIntro();
    bool getExit();
    string getReqItem();
    void setHasReq(bool foundItem);
    
};


#endif 
