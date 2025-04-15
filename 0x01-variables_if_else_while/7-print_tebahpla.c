#include <stdio.h>

/**
 * main - a program that prints the alphabet in reverse
 *
 * Return: always 0
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
