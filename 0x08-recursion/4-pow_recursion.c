#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the number to power
 * @y: the exponent
 *
 * Return: result of x**y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 1 || y == 0)
	{
		return (1);
	}
	return ((x * (y - )) + _pow_recursion(x, y - 1));
}	
