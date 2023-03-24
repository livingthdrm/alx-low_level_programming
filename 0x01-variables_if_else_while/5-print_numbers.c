#include <stdio.h>

/**
 * main - entry point into the program
 *
 * description - a program that prints the numbers 1 to 9
 *
 * Return: Always (0)
 */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		printf("%d\n", numbers);
	}
	return (0);
}
