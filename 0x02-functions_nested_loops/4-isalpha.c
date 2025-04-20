#include <stdio.h>
#include "main.h"

/**
 * _isalpha - a function to check whether a charcter is alphanumeric
 * @c: the character to check
 *
 * Return: 1 is c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
