#include <stdio.h>

/**
 * main - entry point
 *
 * description - A program that prints all the numbers of base 16 in
 * lowercase
 *
 * Return: Always (0)
 */

int main(void)
{
	char c = '0';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
