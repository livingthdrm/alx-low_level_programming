#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase except q and e
 *
 * Return: always 0
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if ((i != 101) && (i != 113))
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
