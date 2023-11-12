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
		length_of_the_string++;
		str++;

		n = ((length_of_the_string - 1) / 2);
		while (*str > *(str + n))
		{
			str++;
			_putchar(*str);
		}
	}
	_putchar('\n');
}
