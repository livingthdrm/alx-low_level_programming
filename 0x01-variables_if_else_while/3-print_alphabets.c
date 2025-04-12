#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase then in uppercase
 *
 * Return: always 0
*/
int main(void)
{
	int i = 97, j = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
