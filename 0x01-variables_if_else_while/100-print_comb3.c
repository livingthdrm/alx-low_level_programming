#include <stdio.h>

/**
 * main - a program that prints all possible different combinations of 2 digits
 *
 * Return: Always (0)
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		int j = i + 1;

		while (j <= 57)
		{
			putchar(i);
			putchar(j);

			if ((i != 56 || j != 57))
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
