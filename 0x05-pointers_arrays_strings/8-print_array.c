#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 *
 * @a: the array
 * @n: the number to print
 */
void print_array(int *a, int n)
{
	int i;

	while (i < n)
	{
		if (*a != '\0')
		{
			printf("%d", a[i]);
		}
		_putchar(44);
		_putchar(32);
		i++;
	}
	_putchar('\n');
}
