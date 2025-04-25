#include <stdio.h>
#include "main.h"

/**
 * print_table - a function to print the n times table starting with 0
 * @n: the number to print
 *
 */
void print_table(int n)
{
	if (n < 10)
	{
		_putchar(32);
		_putchar(32);
		_putchar('0' + n);
	}
	else if (n < 100)
	{
		_putchar(32);
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else
	{
		_putchar('0' + n / 100);
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + n % 10);
	}
}

/**
 * print_times_table - a function to compute the level of n
 * @n: the number to print
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n >= 0 && n <= 15)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(32);
				print_table(result);
			}
		}
		_putchar('\n');
	}
	}
}
