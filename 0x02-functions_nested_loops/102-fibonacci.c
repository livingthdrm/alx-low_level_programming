#include <stdio.h>
#include "main.h"

/**
 * fibonacci - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 */
void fibonacci(void)
{
	long long i = 1, j = 2, result = 0, n = 3;

		printf("%lld, ", i);
		printf("%lld, ", j);
	while (n <= 50)
	{
		result = (i + j);
		if (n == 50)
		{
			printf("%lld", result);
		}
		else
		{
			printf("%lld, ", result);
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
