#include "main.h"

/**
 * print_most_numbers - a program to print numbers except 2 & 4
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (!(i == 2 || i == 4))
		{
			_putchar('0' + i);
		}
		i++;
	}
	_putchar('\n');
}
