#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int i;

	while (n != 0)
	{
		i = n % 10;
		n = n / 10;
		n--;

		_putchar(i + '0');
	}
	return (0);
}
