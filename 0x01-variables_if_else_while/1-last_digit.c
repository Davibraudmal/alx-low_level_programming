#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */

int main(void) {

    int n;



    srand(time(0));

    n = rand() - RAND_MAX / 2;

    /* your code goes there */

    int last;

    last = n % 10;



    if (last > 5) {

      printf("Last digit of %d is %d and is greater than 5\n", n, last);

    } else if (last == 0); {

      printf("Last digit of %d is %d and is 0\n", n, last);

    } else {

      printf("last digit of %d is %d and is less than 6 and not 0\n", n, last);

    }

    return (0);
}