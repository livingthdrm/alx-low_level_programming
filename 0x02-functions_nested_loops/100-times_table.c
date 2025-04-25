#include <stdio.h>
#include "main.h"

/**
 * print_times_table - a function to print the n times table starting with 0
 * @n: the number to print
 *
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n >= 0 && n <= 15)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n, j++)
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
			if (result < 10)
			{
				_putchar(32);
				_putchar(32);
				_putchar('0' + result);
			}
			else if (result < 100)
			{
				_putchar(32);
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			else
			{
				_putchar('0' + result / 100);
				_putchar('0' + (result / 10) % 10);
				_putchar('0' + result % 10);
			}
			}
		}
		_putchar('\n');
	}
	}
}
