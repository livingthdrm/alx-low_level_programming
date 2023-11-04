#include "main.h"

/**
 * _islower - checks whether a character is lowercase or not
 * @c: character to check
 *
 * Return: 1 if c is lowercase & 0 if uppercase
 */
int _islower(int c)
{
	char i = 'a';

	while (i < 'z')
	{
		if (char(c) == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}	
