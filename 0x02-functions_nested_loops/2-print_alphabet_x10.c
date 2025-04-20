#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		int j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}

}
