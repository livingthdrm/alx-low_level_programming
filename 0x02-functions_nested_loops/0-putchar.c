#include <stdio.h>
#include "main.h"

/**
 * main - a program that print out _putchar
 *
 * Return: 0
 */
int main(void)
{
	char *c = "_putchar";

	while (*c < '\0')
	{
		_putchar('0' + *c);
		c++;
	}
	_putchar('\n');
	return (0);
}
