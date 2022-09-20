#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
* main - this is the main block
* Description:program that prints the alphabet in lowercase,
*followed by a new line.
* Return: 0
*/

int main(void)

{{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	}
	printf("\n");

	return (0);
}
