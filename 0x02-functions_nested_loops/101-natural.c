#include <stdio.h>
#include "main.h"

/**
 * print_multiple - a program to compute all the sum of all
 * multiples of 3 and 5 below 1024
 *
 * Return: sum
 */
int print_multiple(void)
{
	int sum = 0, n = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
		n++;
	}
	return (sum);
	_putchar('\n');
}

/**
 * main - function to test the concept
 *
 * Return: always 0
 */
int main(void)
{
	printf("%d\n", print_multiple());
	return (0);
}
