/*******************************************************************
 **  Filename: text.cpp
 **  Author: Tira Wickland
 **  Date: July 28th, 2016
 **  Description: This is the text implementation file
 **  Input: integers
 **  Output: displays text
 *******************************************************************/

#include "text.h"
#include <iostream>

using std::cout;
using std::endl;

/************************************************************************
 ** Function: displayHowToWin
 ** Description: This function displays how to win the game
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: displays how to win the game
 ************************************************************************/
void displayHowToWin()
{
    cout << "\nYou must find your roommate and get out of the cave to win.\n";
    cout << "To do so, pick up the shovel in the Mud Room.  Then continue\n";
    cout << "east to the Stalagmite Room.  You must enter the Stalagmite\n";
    cout << "Room from the east to get to the rope.  Once you have the rope\n";
    cout << "Swing across the room north to the Crawlspace.  There you can pick\n";
    cout << "up the flashlight.  You will need this in the Dark Room.  Exit the\n";
    cout << "Crawlspace back to the south and then head west to the Dark Room\n";
    cout << "In the Dark Room, eat the Doritos.  This will cause the bear blocking\n";
    cout << "the southern passage to leave.  Proceed south to the Bear Room and\n";
    cout << "you will find you can now proceed south again to the Lake Room.  In\n";
    cout << "the lake room you find your roommate and a boat.  If you have the shovel\n";
    cout << "you can now proceed to cross the lake.  At this point you can go south\n";
    cout << "and end the game or go west and find the treasure. Then go south to\n";
    cout << "win the game.\n\n";
    cout << "Enter any key to continue...\n";
}


/************************************************************************
 ** Function: displayIntro
 ** Description: This function displays the introduction
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: displays introduction
 ** Note: Jameson, W. C. (1995). Buried Treasures of California: Legends 
 ** from California's Mountains, Deserts. Little Rock, AR: August House.
 ************************************************************************/
void displayIntro()
{
    cout << "\nYour roommate didn’t come home last night. You search his room\n";
    cout << "and find topographic maps and sketches of a cave structure.\n";
    cout << "History books are piled up on his desk with pages of newspaper articles\n";
    cout << "from 1900s taped to his walls. One article catches your attention:\n\n";
    cout << "           ######################################################\n";
    cout << "           #          INDIAN TREASURE IN ARGUS MOUNTAINS        #\n";
    cout << "           #    Somewhere not far from Argus Mountains lies a   #\n";
    cout << "           #    little known treasure cave.  In 1920, Frank     #\n";
    cout << "           #    Bishop, a prospector from Death Valley          #\n";
    cout << "           #    came into town with gold coins and claimed to   #\n";
    cout << "           #    have found the treasure.  However, while in     #\n";
    cout << "           #    town he suffered a serious accident that        #\n";
    cout << "           #    prevented him from returning to the cave.       #\n";
    cout << "           #    Since his death many have attempted to locate   #\n";
    cout << "           #    this treasure, but the mysterious cave has      #\n";
    cout << "           #           eluded all who seek the fortune.         #\n";
    cout << "           ######################################################\n\n";
    cout << "Oh boy…your roommate’s at it again and he’s known to get himself into trouble.\n";
    cout << "You examine the topographic map closer and sure enough, he’s circled a spot  \n";
    cout << "in the Argus Mountain Range.  You grab the topographic map, sketches of a cave\n";
    cout << "structure, and your keys.  Time to be a hero.\n" << endl;
    cout << "Enter any key to continue...";
}


/************************************************************************
 ** Function: displayIntro2
 ** Description: This function displays the second introduction
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: displays second introduction
 ************************************************************************/
void displayIntro2()
{
    cout << "\nYou arrive at Argus Mountains by midday.  Sure enough, you see your\n";
    cout << "roommate’s car parked near a pile of boulders.   A tree next to the vehicle\n";
    cout << "has the end of a rope tied around it.  The other end of the rope leads into\n";
    cout << "the boulders.  You park your truck beside his car and check your cell phone.\n";
    cout << "No signal. Were you expecting anything different?  You hop out of the car and\n";
    cout << "approach the pile of boulders.  Nimbly climbing up the closest boulder, you\n";
    cout << "peer over the edge to see the rope leads right over the edge of the boulders\n";
    cout << "into a gaping hole.  The black hole seems to go on forever.  How far down does\n";
    cout << "it go?  You call down to your roommate.  No response.\n\n";
}

/************************************************************************
 ** Function: noTurningBack
 ** Description: This function displays the user with the message if 
 ** user chooses not to go down into the caves
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: displays noTurningBack message
 ************************************************************************/
void noTurningBack()
{
    cout << "\nYou decide to go for help. You're a responsible adult who isn't about to\n";
    cout << "jump down a dark hole.  You go back to your car and hear the hiss from \n";
    cout << "your tire.  Sure enough the tire is completely flat. Just your luck.\n";
    cout << "Ok so you’re down to one decision...descending into the unknown.\n";
    cout << "\nEnter any key to continue...";
}

/************************************************************************
 ** Function: displayMain(int number)
 ** Description: This function displays the Main text
 ** Parameters: integer
 ** Preconditions: valid integer
 ** Postconditions: displays Main text
 ************************************************************************/
void displayMain( int number)
{
    if(number == 1)
    {
        cout << "\nSunlight streams into the room.  The air seems cooler down here\n";
        cout << "You decide you do not want to be in this cave after dark.\n";
        cout << "Time to find your roommate.\n";
    }
    
    else if(number == 2)
    {
        cout << "\nThe sunlight filters down into the cave.  How much time has passed\n";
        cout << "since you've been down here?  You better find your roommate soon before\n";
        cout << "the sun goes down\n";
    }
}

/************************************************************************
 ** Function: displayDark(int number)
 ** Description: This function displays the Dark text
 ** Parameters: integer
 ** Preconditions: valid integer
 ** Postconditions: displays dark text
 ************************************************************************/
void displayDark(int number)
{
    if(number == 1)
    {
        cout << "\nThe passageway gets darker and darker until you are only able to guide\n";
        cout << "yourself with your hands touching the walls on either side of you.  Then\n";
        cout << "the walls drop away as you enter a room.  The room is pitch black.\n\n";
    }
    
    if(number == 2)
    {
        cout << "\n           The room is pitch black.  Wonder what's in here?\n";
    }
    if(number == 3)
    {
        cout << "\nClicking the flashlight on, you shine it across the room.  A neon orange\n";
        cout << "backpack that can only be your roommate’s is lying on the ground in the\n";
        cout << "cave.  Your roommate is nowhere to be seen.  You search through the backpack.\n";
        cout << "A bottle of water, a cell phone, and a bag of Doritos.\n";
        cout << "\nDo you:\n";
        cout << "1. Drink the water\n";
        cout << "2. Use the cellphone\n";
        cout << "3. Eat the Doritos\n";
        cout << "4. Leave the bag\n";
    }
    if (number == 4)
    {
        cout << "\nNow what? Do you:\n";
        cout << "1. Drink the water\n";
        cout << "2. Use the cellphone\n";
        cout << "3. Eat the Doritos\n";
        cout << "4. Leave the bag\n";
    }
    if (number == 5)
    {
        cout << "\nThe moment you tear open the bag you hear a growl from the other room.\n";
        cout << "Seriously?  A bear comes barreling into the room and swipes the Doritos\n";
        cout << "bag from you.  Not feeling up to wrestling a bear for his Doritos,\n";
        cout << "you watch him lumber away with his prize. A moment later the flashlight\n";
        cout << "flickers and dies.\n";
    }
    if(number == 6)
    {
        cout << "\nYou decide to leave the bag.  Your looking for a roommate, not a bag.\n";
        cout << "The flashlight begins to flicker. Time to go.\n";
    }
}


/************************************************************************
 ** Function: displayStalagmites(int number)
 ** Description: This function displays the Stalagmites text
 ** Parameters: integer
 ** Preconditions: valid integer
 ** Postconditions: displays Stalagmites text
 ************************************************************************/
void displayStalagmites(int number)
{
    if(number == 1)
    {
        cout << "\nYou duck to avoid the ceiling as the passage gets smaller and smaller.\n";
        cout << "Then it opens to a large, open space.  You’re standing on a ledge about\n";
        cout << "20 feet up from the floor of the cavern.  You stare down at the hundreds\n";
        cout << "of stalagmite jutting up from the ground of the cavern.  That looks\n";
        cout << "challenging to cross. You notice a rope dangling from the center of the\n";
        cout << "room.  Cursing under your breath, you begin to wonder how you ever got\n";
        cout << "Indiana Jones as your roommate.  The end of the rope is caught on a rock\n";
        cout << "beside a ledge on the east side of the room.  In fact, there are ledges on\n";
        cout << "each side of the room with passages leading to parts unknown.\n";
        cout << "\n                       Time to start exploring!\n\n";
        cout << "But first you have to get to the rope and you won’t be able to reach it from\n";
        cout << "this ledge. Better head back and find another way.\n";
    }
    
    else if(number ==2)
    {
        cout << "\nYou duck to avoid the ceiling as the passage gets smaller and smaller.\n";
        cout << "Then it opens to a large, open space.  You’re standing on a ledge about\n";
        cout << "20 feet up from the floor of the cavern.  You stare down at the hundreds\n";
        cout << "of stalagmite jutting up from the ground of the cavern.  That looks\n";
        cout << "challenging to cross. You notice a rope dangling from the center of the\n";
        cout << "room.  Cursing under your breath, you begin to wonder how you ever got\n";
        cout << "Indiana Jones as your roommate.\n\n";
        cout << "Then you see it.  The end of the rope is dangling right in front of you.\n";
    }

    else if(number == 3)
    {
        cout << "\nYou're standing on a ledge about 20 feet up from the floor of the cavern.\n";
        cout << "Hundreds of stalagmite are jutting up from the ground of the cavern.\n";
        cout << "Then you see it.  The end of the rope is dangling right in front of you.\n";
    }
    else if(number == 4)
    {
    cout << "\nYou're standing on a ledge about 20 feet up from the floor of the cavern.\n";
    cout << "Hundreds of stalagmite are jutting up from the ground of the cavern.\n";
    cout << "That looks challenging to cross and the rope is out of reach.\n";
    cout << "Better head back and find another way.\n\n";
    }

}
/************************************************************************
 ** Function: displayBear(int number)
 ** Description: This function displays the BearRoom text
 ** Parameters: integer
 ** Preconditions: valid integer
 ** Postconditions: displays BearRoom text
 ************************************************************************/
void displayBear(int number)
{
    if (number == 1)
    {
        cout << "\nYou walk down the passageway to find another large room.  You barely notice\n";
        cout << "much of the room though as your attention is focused on the big furry butt\n";
        cout << "of what can only be a bear lying on the far side of the room.  You walk\n";
        cout << "cautiously into the room, trying to see around the behind of the beast.\n";
        cout << "He looks like he’s stuck with his front half in another passageway.\n";
    }
    
    if (number == 2)
    {
        cout << "\n         You tiptoe into the room.  The bear hasn't moved.\n";
    }
}

/************************************************************************
 ** Function: bearShovel(int number)
 ** Description: This function displays the bear action (shovel)
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: displays bear no shovel text
 ************************************************************************/
void bearShovel(int number)
{
    /* If you don't have the shovel */
    if(number == 1)
    {
        cout << "\nWhat if the bear ate your roommate? What if your roommate\n";
        cout << "is trapped behind the bear?  You whisper your roommate’s name.\n";
        cout << "No response.  You need to see what the bear’s blocking.\n";
        cout << "Maybe there’s an item in another room that can help you.\n\n";
    }
    
    /* If you decide to hit the bear with your shovel */
    if(number == 2)
    {
        cout << "\n     Are you crazy? You quickly disregard this idea, not wanting\n";
        cout << "       to end up bear bait.  There has to be another way...\n";
    }
    
    /* If you decide to hit the wall with your shovel */
    if(number == 3)
    {
        cout << "\nYou bang the shovel lightly against the wall and when that doesn’t\n";
        cout << "get a response you hit it a little harder.\n";
        cout << "The bear grunts, but doesn’t budge. There has to be another way...\n";
    }
        
}

/************************************************************************
 ** Function: displayBats()
 ** Description: This function displays the bats text from main action
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: displays bats text
 ************************************************************************/
void displayBats()
{
    cout << "\nYou shout the name at the top of your lungs.  The sound\n";
    cout << "echoes throughout the chamber.  Then you hear them.  Hundreds\n";
    cout << "of bats come racing towards you.  You throw yourself to the\n";
    cout << "ground and cover your head.  Moments later the caves are silent\n";
    cout << "again.  You stand up and notice some bat guano in your hair. YUCK!\n\n";
}

/************************************************************************
 ** Function: displayMud(int number)
 ** Description: This function displays the text in mud room
 ** Parameters: integer
 ** Preconditions: valid integer
 ** Postconditions: displays mud room text
 ************************************************************************/
void displayMud(int number)
{
    /* If shovel is in the room */
    if(number == 1)
    {
        cout << "\nYou start to feel your feet squish as you walk down the passageway.\n";
        cout << "As the passageway opens up to a room, you find yourself in ankle-deep\n";
        cout << "mud.  You begin to cross the room and trip over something in the room.\n";
        cout << "It’s covered in mud.\n";
    }
    
    /* If shovel is not in the room */
    if(number == 2)
    {
        cout << "\nAs the passageway opens up to a room, you find yourself in\n";
        cout << "ankle-deep mud.\n";
    }
}

/************************************************************************
 ** Function: displayCrawlspace()
 ** Description: This function displays the text in the crawlspace
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: displays crawlspace text
 ************************************************************************/
void displayCrawlspace()
{
    cout << "\nThe walls close in on you and you can barely see in front\n";
    cout << "of your face its so dark. You feel the top of your head brush\n";
    cout << "the ceiling.  Carefully, you drop onto your hands and knees\n";
    cout << "and continue to crawl.\n";
}

void displayFlashlight()
{
    cout << "\nAs you crawling through the passage your hand brushes against\n";
    cout << "a cylindrical, cold shape. You grasp it and realize its your\n";
    cout << "flashlight that’s been missing.  No wonder you couldn’t find it!\n";
    cout << "1. Take flashlight\n";
    cout << "2. Leave flashlight\n";
}


/************************************************************************
 ** Function: displayFindCave()
 ** Description: This function displays find cave text
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: displays find cave text
 ************************************************************************/
void displayFindCave()
{
    cout << "\nThe passageway leads to a huge cavern, complete with an\n";
    cout << "underground lake! And there, sitting on the shore of the\n";
    cout << "lake, is a familiar face grinning up at you.\n\n";
}


/************************************************************************
 ** Function: displayLake()
 ** Description: This function displays the lake text
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: displays the lake text
 ************************************************************************/
void displayLake()
{
    cout << "\n\"Boy am I glad to see you!\" Your roommate calls out.\n";
    cout << "He stands up and steps into a boat.  Wait a boat?\n";
    cout << "He brought a boat down here?  How long has he been planning this?\n";
}


/************************************************************************
 ** Function: displayBoat()
 ** Description: This function displays the boat text
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: displays the boat text
 ************************************************************************/
void displayBoat()
{
    cout << "\nThe water is calm and eerily quiet as you paddle to the middle";
    cout << " of the lake\n";
}

/************************************************************************
 ** Function: displayPaddle()
 ** Description: This function displays the lake paddle text
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: displays the lake paddle text
 ************************************************************************/
void displayPaddle()
{
    cout << "\nAs you board the boat you hear hear a growl.\n";
    cout << "\"Not again!\" Your roommate says.\n";
    cout << "\nYou watch the huge bear come charging to the entrance,\n";
    cout << "Once again the bear is blocking the way.  There's no going back now.\n";
}


/************************************************************************
 ** Function: displayTreasure()
 ** Description: This function displays the treasure text
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: displays the treasure text
 ************************************************************************/
void displayTreasure(int number)
{
    if(number == 1)
    {
        cout << "\nYou paddle west into the tunnel on the west side on the lake.\n";
        cout << "Why not explore a little?  The tunnel gets dark and your\n";
        cout << "roommate clicks on his flashlight.\n";
        cout << "On a recess of the wall is boxes of gold coins…gems…jewels.\n";
        cout << "So much glittering!  You can’t help but grin.  The treasure!\n";
        cout << "Your roommate lets out a whoop and paddles over to the wall.\n";
    }
    if(number == 2)
    {
        cout << "\nYou paddle west into the tunnel on the west side of the lake.\n";
        cout << "Your roommate clicks on his flashlight. The wall is bare.\n";
    }
}


/************************************************************************
 ** Function: displayTookTreasure(in number)
 ** Description: This function displays the tookTreasure text
 ** Parameters: none
 ** Preconditions: none
 ** Postconditions: displays the tookTreasure text
 ************************************************************************/
void displayTookTreasure(int number)
{
    
}
/************************************************************************
 ** Function: displayEndSeq(int number)
 ** Description: This function displays the end sequence text
 ** Parameters: integer
 ** Preconditions: valid integer
 ** Postconditions: displays end sequence text
 ************************************************************************/
void displayEndSeq(int number)
{
    if(number == 1)
    {
        cout << "\nThe boat has barely touched the shore before you jump out,\n";
        cout << "eagerly eyeing the slanted slope of shore leading upwards.\n";
        cout << "Sure enough you see a passage at the far end with faint light\n";
        cout << "shining in.  You’re getting out of here!  You journey up the\n";
        cout << "passageway for what feels like hours but is probably only a\n";
        cout << "minute or two.  Then…sky!  You pop out of a hole in the ground\n";
        cout << "and throw yourself onto the forest floor.  You roommate collapses\n";
        cout << "next to you.  \"Boy was that an adventure.\"  He says, panting.\n";
        cout << "\"So what are we doing next weekend?\"\n";
    }
    if(number == 2)
    {
        cout << "\nThe boat has barely touched the shore before you jump out,\n";
        cout << "eagerly eyeing the slanted slope of shore leading upwards.\n";
        cout << "Sure enough you see a passage at the far end with faint light\n";
        cout << "shining in.  You’re getting out of here!  You journey up the\n";
        cout << "passageway for what feels like hours but is probably only a\n";
        cout << "minute or two.  Then…sky!  You pop out of a hole in the ground.\n";
        cout << "and throw your bag onto the forest floor.  The sound of the gold\n";
        cout << "coins jingling is music to your ears.  You can't wait to get home\n";
        cout << "to count it.You roommate collapses next to you.\n";
        cout << "\"Boy was that an adventure.\"  He says, panting.\n";
        cout << "\"So what are we doing next weekend?\"\n";
    }
}
