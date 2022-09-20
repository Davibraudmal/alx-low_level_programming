#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
*main: mores code print the last
*digit of a randonly generated number
*return 0:
*/

int main(void) /*main: starts here*/
{
/*
*Main: this code print the last digit of a random number
* returns: 0
*/

	int n, last;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

    /* your code goes there */

	last = n % 10;

	if (last > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else
	{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
