#include <stdio.h>
#include "main.h"

/**
 * _strcpy - a function to copy the content of a pointer onto a buffer
 * @dest: the destination buffer
 * @src: the string to copy
 * Return: the pointer to destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (*(src + len) != '\0')
	{
		len++;
	}

	i = 0;

	while (i <= len)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
