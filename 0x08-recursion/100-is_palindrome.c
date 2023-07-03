#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a sring is a palindrome
 * @s: string to reverse check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	else
	{
		return (check_pal(s, 0, _strlen_recursion(s)));
	}
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate length
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * check_pal -checks the charcters recursively if palindrome
 * @s: string to test
 * @i: looper
 * @len: length of string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	else if (i >= len)
	{
		return (1);
	}
	else
	{
		return (check_pal(s, i + 1, len - 1));
	}
}
