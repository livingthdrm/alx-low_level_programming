#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
		while (count >= 0)
		{
			count--;
			s--;
		}
		_putchar('\0');
}
