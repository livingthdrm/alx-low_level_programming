#include <stdio.h>
#include "_putchar.h"

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
	putchar('\n');
	return (0);
}
