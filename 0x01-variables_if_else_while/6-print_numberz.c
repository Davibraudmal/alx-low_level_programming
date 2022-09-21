#include <stdio.h>
/**
*main - program that prints all single digit
*number of base 10 using putchar
*starting form 0, followed by new line
*Return: (0).
*/
int main(void)
{
char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	putchar(ch);

	return (0);
}
