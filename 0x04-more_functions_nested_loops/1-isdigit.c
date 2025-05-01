#include "main.h"

/**
 *_isdigit - a program to check for digit 0 - 9
 * @c: the digit to check
 *
 * Return: 1 if digit 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
