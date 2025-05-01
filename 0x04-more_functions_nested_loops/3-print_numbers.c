#include "main.h"

/**
 * print_numbers - a function to print numbers 0 through 9
 */
void print_numbers(void)
{
	int i = 0;

	while ( i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
