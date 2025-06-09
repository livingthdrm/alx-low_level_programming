#include "main.h"

/**
 * rev_string - a function to reverse a string
 * @s: the string
 */
void rev_string(char *s)
{
	int i = 0, len = 0;
	char temp;

	while (*(s + len) != '\0')
	{
		len++;
	}

	len = len - 1;

	while (i <= len)
	{
		temp = *(s + i);
		*(s + i) = *(s + len);
		*(s + len) = temp;
		i++;
		len--;
	}
}
