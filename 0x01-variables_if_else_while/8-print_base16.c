#include <stdio.h>

/**
 * main - a program that prints hexadecimal values
 *
 * Return: always 0
 */
int main(void)
{
	int i = 48, j = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}

	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
