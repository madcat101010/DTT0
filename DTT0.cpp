#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <string>
#include "board.h"


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
	time_t currentTime = time(0);
	tm* currentTimePt = localtime(&currentTime); //get current time structure
	int i = 1;
/*	while( i < argc)
	{
		std::cout << args[i] <<std::endl;
		i++;
	}
*/
	
	int delay = 100000000;
	int lim = atoi(args[1]); 
	printf("\n");
	while(i < lim)
	{
		while (delay > 1)
		{
			delay--;
		}
		delay = 100000000;
		currentTime = time(0);
		printf("0100              \n");
		printf("                  \n");
		printf("================= \n");
		currentTimePt = localtime(&currentTime);
		printf("Test: %d \n\r", currentTimePt -> tm_sec);
		printf("\033[F\033[F");
		printf("\033[F");
		i++;
	}	
	printf("\n\n\n");
	
	currentTimePt -> tm_hour;
	//dt -> tm_min;
	//dt -> tm_sec;
	
	return 0;
}





