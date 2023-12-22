#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find square root of
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	int times = 1;
	int buffer = 1;
	
	if (n < buffer)
	{
		return (-1);
	}
	if (n < 0)
	{
		n * -1;
	}
	n - buffer;
	_sqrt_recursion(n - (buffer + 2));
	times++;
	return (times);
}
