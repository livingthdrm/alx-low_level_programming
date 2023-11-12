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
	*s = s[count = 1];
		while (count >= 0)
		{
			s--;
			count--;
		}
		_putchar('\0');
}
