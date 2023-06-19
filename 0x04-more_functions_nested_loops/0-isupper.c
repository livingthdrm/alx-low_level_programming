#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks whether a character is uppercase
 * @c: Character to check
 * Return: 1
 */

int _isupper(char c)
{
	int asciiValue = (int)c;

	if ((asciiValue >= 65) && (asciiValue <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	
