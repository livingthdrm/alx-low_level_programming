#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: parameter 1
 * @b: parameter 2
 */
void swap_int(int *a, int *b)
{
	int *temp;

	*temp = *a;
	*a = *b;
	*b = *temp;
}
