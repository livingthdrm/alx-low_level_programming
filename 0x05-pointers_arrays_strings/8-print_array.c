#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 *
 * @a: the array
 * @n: the number to print
 */
void print_array(int *a, int n)
{
	while (*a <= n)
	{
		_putchar(*a);
		_putchar(44);
		_putchar(32);
	}
	_putchar('\n');
}
