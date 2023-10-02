#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * int _strlen - function that checks teh length of a string
 *
 * @*s: - string to be evaluated
 * Return: 0
 */
int _strlen(char *s)
{
	int count = 0, i = 0;
	while(*s !== "\0")
	{
		count += *s[i];
		count++;
	}
	return count;
}
