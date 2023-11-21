#include "main.h"

/**
 * *_strncat - a function that concatenates 2 strings
 * except this time only concatenate upto nth object
 * @dest: destination string
 * @src: string to concatenate
 * @n: upto this
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	char *final = *dest;

	while (*final != '0')
	{
		final++;
	}
	while (*src != *(src + n))
	{
		*final = *src;
		src++;
		final++;
	}
	*final = '\0';
	return (dest);
}
