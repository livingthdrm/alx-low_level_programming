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
	int i = 0;

	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (dest);
}
