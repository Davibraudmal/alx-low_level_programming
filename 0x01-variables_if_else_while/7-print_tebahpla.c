#include <stdio.h>

/**
 * main - program that prints
 * the lowercase alphabet in reverse.
 *
 * Return: 0 on success
*/

int main(void) /* the code starts here */
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	putchar(c);

	putchar('\n');

	return (0);
}
