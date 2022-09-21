#include <stdio.h>
/**
*main - program that prints all single digit
*number of base 10 using putchar
*starting form 0, followed by new line
*Return: (0).
*/
int main(void)
{
int num = '0';

	for (num = '0'; num <= '9'; num++)
	putchar(num);

	return (0);
}
