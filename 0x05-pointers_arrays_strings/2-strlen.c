#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strlen - function that checks teh length of a string
 *
 * @s: string to be evaluated
 * Return: 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}