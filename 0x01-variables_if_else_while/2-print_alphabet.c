#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase
 *
 * Return: Always 0
*/

int main ()
{
	int i = 97;
	while (i < 123)
	{
		putchar(i);
		i += 1;
	}
	putchar('\n');
	return (0);
}
