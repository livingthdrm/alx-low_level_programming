#include "main.h"

/**
 * print_number - a program to print an integer
 * @n: the number to print
 *
 */

void print_number(int n)
{
	int divisor = 1;
	unsigned int number;

	if (n < 0)
	{
		_putchar('-');
		number = -n;
	}
	else
	{
		number = n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (number / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		_putchar((number / divisor) + '0');
		number %= divisor;
		divisor /= 10;
	}
}
