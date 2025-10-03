#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @s: the string to convert
 * ROT13 is a simple letter substitution cipher that
 * replaces a letter with the 13th letter after it in the Latin alphabet.
 * ROT13 is a special case of the Caesar cipher which was developed in
 * ancient Rome, used by Julius Caesar in the 1st century BC.
 * ROT13 can be referred by "Rotate13", "rotate by 13 places",
 * hyphenated "ROT-13" or sometimes by its autonym "EBG13".
 *
 * Return: the resultant string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] += 13;
		}
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
		{
			s[i] -= 13;
		}
		i++;
	}
	return (s);
}
