#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: uptopoint to copy
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *i = dest;

	while (*i != '\0')
	{
		i++;
	}

	while (*src != '\0' && n > 0)
	{
		*i = *src;
		src++;
		i++;
		n--;
	}
	*i = '\0';
	return (dest);
}
