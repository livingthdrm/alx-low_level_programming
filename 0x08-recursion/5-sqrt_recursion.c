#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 *_sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate square root
 *
 *Return: result of square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (actual_sqrt_recursion(n, 0));
	}
}

/**
 * *actual_sqrt_recursion - recursion function to find natural square
 * root of a number
 * @n: number to calculate square of
 * @i: looper
 *
 * Return: square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (1);
	}
	else
	{
		return (actual_sqrt_recursion(n, i + 1));
	}
}
