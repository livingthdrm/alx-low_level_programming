#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 *
 * @a: the array
 * @n: the number to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (*a != '\0')
	{
		if (i < n)
		{
			printf("%d", *a);
			i++;
		}
		_putchar(44);
		_putchar(32);
		a++;
	}
	_putchar('\n');
}
