#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: the string with the letters
 *
 * Return: always a string in uppercase
 */
char *string_toupper(char *s)
{
	int len_s = 0, i;

	while (*(s + len_s) != '\0')
	{
		len_s++;
	}

	i = 0;
	while (i <= len_s)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
