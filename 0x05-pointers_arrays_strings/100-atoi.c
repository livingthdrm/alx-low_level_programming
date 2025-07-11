#include <stdio.h>

/**
 * _atoi - a function to convert a string to a number
 * @s: the string to convert
 *
 * Return: result * sign
 */

int _atoi(char *s)
{
	unsigned int i = 0, sign = 1, result = 0, started = 0, digit;

	while (s[i] != '\0')
	{
		if (!started && s[i] == '-')
		{
			sign *= -1;
		}
		else if (!started && s[i] == '+')
		{
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			digit = s[i] - '0';
			result = result * 10 + digit;
		}
		else if (started)
		{
			break;
		}
		i++;
	}
	return (result * sign);
}
