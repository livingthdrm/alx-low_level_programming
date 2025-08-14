#include "main.h"

/**
 * *_strcat - a function to concatenate two strings together
 * @dest: the final destination pointer
 * @src: the source of the string
 *
 * Return: null pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}

	i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + len + i) = *(src + i);
		i++;
	}
	(*(dest + len + i)) = '\0';

	return (dest);
}
