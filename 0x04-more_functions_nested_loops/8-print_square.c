#include "main.h"

/**
 * print_square - a function that prints a square
 *
 * @size: the size to print
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	row = 0;
	while (row < size)
	{
		col = 1;
		while (col < size)
		{
			_putchar('#');
			col++;
		}
		_putchar('#');
		row++;
	_putchar('\n');
	}
}
