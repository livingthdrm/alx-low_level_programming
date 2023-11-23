#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: the array
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int *temp = a;

	while (*a < n)
	{
		a++;
	}
	while (*temp > 0)
	{
		*a = *(temp + (n - 1));
		temp--;
	}
	return;
}
