#include "main.h"

/**
 * leet - a function that encodes characters into 1337
 * @s: the string to encode
 *
 * Return: the encorded string
 */
char *leet(char *s)
{
	char input[] = "aeotlAEOTL";
	char output[] = "4307143071";
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;

		while (input[j] != '\0')
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
