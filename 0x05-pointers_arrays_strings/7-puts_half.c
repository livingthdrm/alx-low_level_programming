#include "main.h"
/**
 * puts_half - function that prints half of a string
 *
 * @str: string to print
 */
void puts_half(char *str)
{
	int length_of_the_string = 0;
	int n;

	while (*str != '\0')
	{
		n += length_of_the_string;
		length_of_the_string++;
		str++;
		n = ((length_of_the_string - 1) / 2);
		while (*str != '\0' && *str > *(str + n))
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
