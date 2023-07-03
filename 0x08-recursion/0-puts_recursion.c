#include "main.h"

/**
 * _puts_recursion - fucntion like puts()
 * @s: input
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putschar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putschar("\n");
	}
}
