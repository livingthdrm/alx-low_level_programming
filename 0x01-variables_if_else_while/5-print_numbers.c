#include <stdio.h>

/**
 * main - entry point of program
 *
 * description - A program that prints all single digits numbers of base 10
 *
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');

	return (0);
}

