#include "main.h"

/**
 * print_number - a function that prints an integer
 * but only using putchar
 * @n: the number to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n > -10 && n < 10)
	{
		_putchar('0' + n);
	}
	else if (n > -100 && n < 100)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else if (n > -1000 && n < 1000)
	{
		_putchar('0' + n / 100);
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + n % 10);
	}
	else if (n > -10000 && n < 10000)
	{
		_putchar('0' + n / 1000);
		_putchar('0' + (n / 100) % 10);
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + n % 10);
	}
}
