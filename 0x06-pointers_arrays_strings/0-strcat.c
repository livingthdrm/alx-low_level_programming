#include "main.h"

/**
 * *_strcat - A function that concatenantes 2 strings
 * @dest: destination string
 * @src: source string
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	char *resulting = dest;

	while (*resulting != '\0')
	{
		resulting++;
	}
	while (*src != '\0')
	{
		*resulting = *src;
		resulting++;
		src++;
	}
	resulting = ('\0');
	return (dest);
}
