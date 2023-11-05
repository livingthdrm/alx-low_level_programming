#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to check
 * Return: 1 if > positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (_putchar("+1"));
	}
	else if (n == 0)
	{
		return (_putchar("00"));
	}
	else if (n < 0)
	{
		return (_putchar("-1"));
	}
	return (0);
}
