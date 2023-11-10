#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 *
 * @a: the array
 * @n: the number to print
 */
void print_array(int *a, int n)
{
	int n = 0;
	int i = 0;

	while (*a != '\0')
	{
		if (i < n)
		{
			printf("%d, ", a[i]);
		}
		a++;
	}
	_putchar('\n');
}
