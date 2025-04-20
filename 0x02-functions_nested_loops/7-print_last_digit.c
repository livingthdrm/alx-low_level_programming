#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: the number
 *
 * Return: always 0
 */
int print_last_digit(int n)
{

	if (n >= 0)
	{
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}
	else if (n < 0)
	{
		n *= -1;
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}
	return (0);
}
