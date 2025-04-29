#include <stdio.h>
#include "main.h"

/**
 * a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 */
void fibonacci(void)
{
	int i = 1, j = 2, result = 0, n = 3;

		printf("%d, ", i);
		printf("%d, ", j);
	while (n <= 50)
	{
		result = (i + j);
		if (n == 50)
		{
			printf("%d", result);
		}
		else
		{
			printf("%d, ", result);
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
	fibonacci();
	return (0);
}
