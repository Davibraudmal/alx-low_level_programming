#include <stdio.h>
/**
* main - Prints out the last part of a quote in the standard error.
* Return: 1 if success.
*/
#include <unistd.h>
int main(void)
/* it starts here */
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
/* this will return 1. */
}
