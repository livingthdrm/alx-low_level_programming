#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	while (n != 0)
	{
		n = n % 10;
		_putchar(n);
	}
	_putchar('\n');
	return 0;
}
