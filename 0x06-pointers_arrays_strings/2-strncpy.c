#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: uptopoint to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *i = dest;

	while (*i != '\0')
	{
		i++;
	}

	while (*src < n && *src != '\0')
	{
		*i = *src;
		src++;
		i--;
	}
	*dest = '\0';
	return (dest);
}
