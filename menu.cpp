/*******************************************************************
 **  Filename: menu.cpp
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the menu implementation file
 **  Input: none
 **  Output: displays menu for user
 *******************************************************************/

#include "menu.h"
#include <iostream>

using std::cout;

/************************************************************************
 ** Function: displayMenu
 ** Description: This function displays the menu at the beginning of game
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: displays menu
 ** Note: Special thanks to http://www.ascii-art-generator.org/ for the 
 ** Title Art
 ************************************************************************/
void displayMenu()
{
    cout << "\n\n";
    cout << "       #######                   #####\n";
    cout << "           #    #    # ######    #     #   ##   #    # ######\n";
    cout << "           #    #    # #         #        #  #  #    # #\n";
    cout << "           #    ###### #####     #       #    # #    # #####\n";
    cout << "           #    #    # #         #       ###### #    # #\n";
    cout << "           #    #    # #         #     # #    #  #  #  #\n";
    cout << "           #    #    # ######     #####  #    #   ##   ######\n";
    cout << "_________________________________________________________________________\n\n";
    cout << "                           1. Play Game\n";
    cout << "                           2. How to Win\n";
    cout << "                           3. Quit Game\n";
    cout << "\n               Please select one of the choices from the menu\n";
}

