#include "main.h"

/**
 * _strlen_recursion - Return the length of a string
 * @s: The string to be tested
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int itlong = 0;

	if (*s)
	{
		itlong++;
		itlong += _strlen_recursion(s + 1);
	}
	return (itlong);
}
