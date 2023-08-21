#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: value 1
 * @b: value 2
 *
 * return: VOID
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
