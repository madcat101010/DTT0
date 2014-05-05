#include <iostream>
#include <stdlib>
#include <cstdio>
#include <board.h>




/* random number generator selects one as 1
 * supress user io on screen and avoide enter usage
 * use clock
 * array stores single 1 and rest 0
 * keys 1 - 4 for each row
 * keep a score
 * end game
 */

void main()
{
	time_t currentTime = time(0);
	char* currentTimePt = localtime(&currentTime); //get current time structure
	
	dt -> tm_hour;
	dt -> tm_min;
	dt -> tm_sec;
	

}



int randNum(){
	srand(time());
	return (rand() % 4);
}

