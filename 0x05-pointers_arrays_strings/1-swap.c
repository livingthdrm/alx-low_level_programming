#include "main.h"

/**
 * swap_int - a function that swaps the values of 2 integers
 * @a: value 1
 * @b: value 2
 */

void swap_int(int *a, int *b)
{
	int *temp;

	temp = a;
	a = b;
	b = a;
}
