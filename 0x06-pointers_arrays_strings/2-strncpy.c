#include "main.h"

/**
 * _strncpy - a function that copies a string upto n characters
 * @dest: The buffer to copy to
 * @src: the source string
 * @n: the upto nth character to copy
 *
 * Return: the resultant buffer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
		for ( ; i < n; i++)
		{
			*(dest + i) = '\0';
		}

	return (dest);
}
