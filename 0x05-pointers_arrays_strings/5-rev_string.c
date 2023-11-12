#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int count = 0;
	char *rev;

	while (*s != '\0')
	{
		count++;
		s++;
	}
		while (count > 0)
		{
			*rev = *s;
			s--;
			count--;
			rev++;
		}
		_putchar('\0');
}
