#include "main.h"

/**
 * print_square - a function that prints a square
 *
 * @size: the size to print
 */
void print_square(int size)
{
	int count = size;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (count > 0)
	{
		while (size > 1)
		{
			_putchar('#');
			size--;
		}
		_putchar('#');
		count--;
	_putchar('\n');
	}
}
