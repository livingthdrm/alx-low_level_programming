#include "main.h"

/**
 * print_square - a functon to print a square using #
 * @size: the size of the square
 */
void print_square(int size)
{
	int i = 0, j;

	if (size > 0)
	{
	while (i < size)
	{
		j = 0;

		while (j < size - 1)
		{
			_putchar('#');
			j++;
		}
	_putchar('#');
	_putchar('\n');
	i++;
	}
	}
	else
	{
		_putchar('\n');
	}
}
