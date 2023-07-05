#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - converts strings to integers
 * @s: string convert
 *
 * Return: 0;
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && f == 0)
	{
		if (s[i] == '-')
		{
			++d;
		}
		else if (s[i] > '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			i
