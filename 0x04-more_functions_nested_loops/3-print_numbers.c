#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 */
void print_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		if (c == 2 && c == 4)
		{
			c++;
		}
		_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
