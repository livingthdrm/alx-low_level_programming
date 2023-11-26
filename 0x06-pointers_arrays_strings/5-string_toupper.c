#include "main.h"
/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase
 * @str: The string to evaluate
 * Return: 0
 */
char *string_toupper(char *str)
{
	char *temp = str;

	while (*temp != '\0')
	{
		if (*temp >= 'a' && *temp <= 'z')
		{
			*temp = *temp - ('a' - 'A');
		}
		temp++;
	}
	return (str);
}
