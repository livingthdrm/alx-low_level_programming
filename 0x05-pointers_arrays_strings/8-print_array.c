#include <stdio.h>
#include "main.h"

/**
 * print_array - a function to print n elements of an  arrays of integers
 * @a: the array
 * @n: the number of elements to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", *(a + i));
		}
		else
		{
			printf("%d, ", *(a + i));
		}
		i++;
	}
	printf("\n");
}
