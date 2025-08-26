#include "main.h"

/**
 * reverse_array - a function that reverses an array of integers
 * @a: the array
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temp, i = 0;
	int j = n - 1;

	while (i < j)
	{
		temp = *(a + j);
		*(a + j) = *(a + i);
		*(a + i) = temp;
		i++;
		j--;
	}
}
