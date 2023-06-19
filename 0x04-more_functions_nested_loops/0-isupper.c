#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks whether a character is uppercase
 * @c: Character to check
 * Return: 1
 */

int _isupper(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	
