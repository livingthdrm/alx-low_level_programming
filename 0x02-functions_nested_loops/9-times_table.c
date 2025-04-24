#include <stdio.h>
#include "main.h"

/**
 * times_table - a function that prints the 9 time table
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			int result = i * j;

			if (j == 0)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar(',');
				_putchar(32);

				if (result < 10)
				{
					_putchar(32);
					_putchar('0' + result);
				}
				else
				{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
