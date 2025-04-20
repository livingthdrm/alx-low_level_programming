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
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit *= -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
