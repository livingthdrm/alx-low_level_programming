#include <stdio.h>

/**
 * main - a program that prints all possible combinations of 3 digit numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		int j = i + 1;

		while (j <= 57)
		{
			int k = j + 1;

			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(44);
					putchar(32);
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
