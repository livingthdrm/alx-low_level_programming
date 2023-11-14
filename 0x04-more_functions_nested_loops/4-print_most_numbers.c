#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 * Do not print 2 and 4
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 9)
	{
		if (i != 2 && != 4)
		{
			_putchar('0' + i);
		}
		i++;
	}
	_putchar('\n');
}
