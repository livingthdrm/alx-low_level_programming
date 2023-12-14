#include "main.h"

/**
 * _strlen_recursion - returns lenght of string
 * @s: the string to evaluate
 *
 * Return: an integer
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (*s);
	}
	_strlen_recursion(s + 1);
	i++;
	return (i);
}
