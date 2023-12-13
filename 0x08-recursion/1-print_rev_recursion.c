#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * using recursion
 * @s: the string to evaluate
 */
void _print_rev_recursion(char *s)
{
	if (s == 0)
	{
		_putchar(*s);
		return;
	}
	s--;
	_print_rev_recursion(s);
}
