#include <stdio.h>
#include "main.h"

/**
 * fibonacci2 - a function to print he sum of even valued values
 * of the fibonacci sequence
 */
void fibonacci2(void)
{
	long i = 1, j = 2, fibnext, result = 2;

	while (result <= 4000000)
	{
		fibnext = i + j;
		i = j;
		j = fibnext;

		if (fibnext % 2 == 0)
		{
			result += fibnext;
		}
	}
	printf("%ld\n", result);
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
