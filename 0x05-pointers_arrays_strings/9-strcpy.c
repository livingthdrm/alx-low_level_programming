#include "main.h"

/**
 * _strcpy - copies a string from a source to a destination address
 * @dest: destination address
 * @src: source address
 *
 * Return: pointer to dest;
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
	}
	*dest = '\0';
	return (dest);
}
