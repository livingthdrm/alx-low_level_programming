#include <stdio.h>

/**
 * main - entry point of program
 *
 * description - A program that prints the alphabet in reverse order
 *
 * Return: Always(0)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
