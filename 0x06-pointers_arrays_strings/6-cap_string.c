#include "main.h"

/**
 * cap_string - a function to capitalize every word of a sentence.
 * @s: the string
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char symbols[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] -= 32;
	}

	while (s[i] != '\0')
	{
		j = 0;

		while (j < 13)
		{
			if (s[i] == symbols[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
