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
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;

		while (input[j] != '\0')
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
