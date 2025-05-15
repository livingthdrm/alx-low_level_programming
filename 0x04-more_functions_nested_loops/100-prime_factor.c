#include <stdio.h>
#include "main.h"

/**
 * prime_factor - a function to factorize a given number
 *
 */
void prime_factor(void)
{
	unsigned long number = 612852475143;
	unsigned long i = 2, j;

	while (i <= number)
	{
		if (number % i == 0)
			j = i;
			number /= i;
		}
		i++;
	}
	printf("%lu\n", j);
}

/**
 * main - function to test the above function
 *
 * Return: Always 0
 */
int main(void)
{
	prime_factor();
	return (0);
}
