#include "main.h"
/**
 * _abs - returns the absolute value of an integer
 * @i: value to quantify
 *
 * Return: Always 0
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i == 0)
	{
		return (0);
	}
	else
	{
		return (-i);
	}
	return (0);
}
