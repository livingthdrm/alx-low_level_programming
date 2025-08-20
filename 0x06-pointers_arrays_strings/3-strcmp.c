#include "main.h"

/**
 * _strcmp - a function to compare 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: ALways 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j;

	while (*(s1 + i) != '\0')
	{
		i++;
	}

		j = 0;

		while (*(s2 + j) != '\0')
		{
			j++;
		}

		if (i < j)
		{
			return (-15);
		}
		else if (i == j)
		{
			return (0);
		}
		else if (i > j)
		{
			return (+15);
		}
	return (0);
}
