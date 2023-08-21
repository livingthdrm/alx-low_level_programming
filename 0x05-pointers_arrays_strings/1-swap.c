#include <stdio.h>
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
	int *tmp;
	memcpy(tmp, a, entrySize);
	memcpy(a,b , entrySize);
	memcpy(b,tmp , entrySize);
}

	
