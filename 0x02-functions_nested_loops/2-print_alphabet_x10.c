#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int c = 'a', i = 0;

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
	}
	_putchar('\n');
}
