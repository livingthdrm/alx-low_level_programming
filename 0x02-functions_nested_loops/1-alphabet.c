#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints out the alphabet
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
