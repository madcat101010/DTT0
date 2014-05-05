#include <iostream>
#include <stdlib>


/* random number generator selects one as 1
 * supress user io on screen and avoide enter usage
 * use clock
 * array stores single 1 and rest 0
 * keys 1 - 4 for each row
 * keep a score
 * end game
 */

srand(time(NULL));

void randNum(){
	int randNum = (rand() % 4);
}
