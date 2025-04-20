#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that computes the absolute value of a number
 * @n: the number to compute
 *
 * Return: always 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	return (0);
}
