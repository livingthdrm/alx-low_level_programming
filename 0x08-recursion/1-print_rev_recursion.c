#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * using recursion
 * @s: the string to evaluate
 */
void _print_rev_recursion(char *s)
{
	char *temp = s;

	if (*temp != '\0')
	{
		*temp = *s;
		s++;
		temp++;
	}
	*s = (s + temp) - 1;
	_putchar(*s);
	s--;
	_print_rev_recursion(s);
}
