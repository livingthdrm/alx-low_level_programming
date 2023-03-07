#include <stdio.h>

/**
 * main - entry point of program
 *
 * description - A program that prints the in lowercase, and then in uppercase
 * , followed by a new line
 *
 * Return: Always (0)
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');

	return (0);
}
