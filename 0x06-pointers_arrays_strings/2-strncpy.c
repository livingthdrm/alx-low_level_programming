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
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (dest);
}
