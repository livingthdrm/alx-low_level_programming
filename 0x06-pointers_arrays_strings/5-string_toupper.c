#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: the string with the letters
 *
 * Return: always a string in uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
