#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet - print alphabet
 * description - print alphabet in lowercase
 * Return: has no return value
 */

void print_alphabet(void);

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
