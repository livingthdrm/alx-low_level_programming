#include <stdio.h>

/**
 * Main - entry point of program
 *
 * description - A program that prints the alphabet in lowercase using putchar
 *
 * Return: Always (0)
 */

int main(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
