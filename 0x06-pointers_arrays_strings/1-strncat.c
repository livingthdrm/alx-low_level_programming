#include "main.h"

/**
 * _strncat - a function to concatenate 2 strings upto n bytes of the source
 * @dest: The destination pointer string
 * @src: the source string
 * @n: Upto n bytes of src
 *
 * Return: A pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}

	i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + len + i) = *(src + i);
		i++;
	}
	*(dest + len + i) = '\0';

	return (dest);
}
