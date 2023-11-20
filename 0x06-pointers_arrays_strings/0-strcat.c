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
	char *resulting;

	while (*dest != '\0')
	{
		*resulting += *dest;
		dest++;
		resulting++;
	}
	while (*src != '\0')
	{
		*resulting += *src;
		src++;
		resulting++;
	}
	_putchar(*resulting);
	_putchar('\0');
	return (0);
}
