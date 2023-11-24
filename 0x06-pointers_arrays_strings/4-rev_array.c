#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: the array
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int *temp = a;

	for (int i = 0; i < n/2; i++)
	{
		int temp = *a;
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;

}
