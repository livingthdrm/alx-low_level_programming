#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all possible combinations
 * of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 9)
		{
			putchar('0' + i);
			i++;
		}
		else
		{
			putchar('0' + i);
			putchar(',');
			putchar(' ');
			i++;
		}
	}
	putchar('\n');
	return (0);
}
