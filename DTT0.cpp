#ifndef DTT0_CPP
#define DTT0_CPP

#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <string>
#include "board.h"
#include "options.h"
#include "gamemodeA.h"
#include "gamemodeB.h"
#include "gamemodeC.h"

using std::string;
using std::atoi;

/* random number generator selects one as 1
 * supress user io on screen and avoide enter usage
 * use clock
 * array stores single 1 and rest 0
 * keys 1 - 4 for each row
 * keep a score
 * end game
 */

int main(int argc, char* args[])
{
	int gamemode = 0;
	gamemode = option();
	time_t currentTimet = time(0);
	int currentTime = currentTimet;
	int startTime = currentTime;	//store currrent time in an int as time_t will always be up to date
	int runTime = 0; //subtract this with current time to get how long game was running
	tm* currentTimePt = localtime(&currentTimet); //get current time structure
	int i = 1;
	int state = 1;
	board myboard(4);
	gamemodeA mygamemodeA;
	gamemodeB mygamemodeB;
	gamemodeC mygamemodeC;
	bool validin = 1;
	int in = 0;
//	int lim = atoi(args[1]); 
	printf("\n");
	myboard.updateBoard();
	while(gamemode > 0)
	{
		currentTime = time(0);
		if (gamemode == 1)
			myboard.printBoard(mygamemodeA.getScore());
		else if (gamemode == 2)
			myboard.printBoard(mygamemodeB.getScore());
                else if (gamemode == 3)
                        myboard.printBoard(mygamemodeC.getScore());		
		printf("                       \n");
		printf("=======================\n");
		runTime = currentTime - startTime;
		currentTimePt = localtime(&currentTimet);
		printf("Time: %d \n", runTime);
		printf("Input: ");
		std::cin >> in;
		in--;
		if (gamemode == 1)
			mygamemodeA.runGame(state, myboard, in);
		else if (gamemode == 2)
			mygamemodeB.runGame(state, myboard, in, runTime);
                else if (gamemode == 3)
                        mygamemodeC.runGame(state, myboard, in, currentTime,startTime);
		printf("\n\r");
		printf("\033[F\033[F");
		printf("\033[F\033[F");
		i++;
		if( state == 3 )
			;	//invalid input exception!

	}	
	if(gamemode != -1)	//don't cancel out the go up line if we quit instead of play a game
		printf("\n\n\n\n");
}




#endif
