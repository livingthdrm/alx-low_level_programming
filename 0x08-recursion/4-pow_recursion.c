#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: Result of the calculation
 */
int _pow_recurion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
