#include <stdio.h>
#include "main.h"

/**
 * fibonacci3 - a program that prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 */
void fibonacci3(void)
{
	unsigned long i = 1, j = 2, result = 0, n = 3;

		printf("%lu, ", i);
		printf("%lu, ", j);
	while (n <= 96)
	{
		result = (i + j);
		if (n == 96)
		{
			printf("%lu", result);
		}
		else
		{
			printf("%lu, ", result);
		}
		i = j;
		j = result;
		n++;
	}
	printf("\n");
}

/**
 * main - a function to test the fibonacci function
 *
 * Return: always 0
 */
int main(void)
{
	fibonacci3();
	return (0);
}
