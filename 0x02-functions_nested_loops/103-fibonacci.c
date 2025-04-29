#include <stdio.h>
#include "main.h"

/**
 * fibonacci2 - a function to print he sum of even valued values
 * of the fibonacci sequence
 */
void fibonacci2(void)
{
	long i = 1, j = 2, result = 0;

	while (result <= 4000000)
	{
		result = i + j;
		i = j;
		j = result;

		if (result % 2 == 0)
		{
			result += result;
		}
	}
	printf("%ld\n", result = result + 2);
}
/**
 * main - a function to test the above function
 *
 * Return: always 0
 */
int main(void)
{
	fibonacci2();
	return (0);
}
