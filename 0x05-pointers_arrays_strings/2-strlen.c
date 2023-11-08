#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: string to evaluate
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s < "\0")
	{
		count += *s;
		*s++;
	}
	_putchar('0' + count);
	return (0);
}
