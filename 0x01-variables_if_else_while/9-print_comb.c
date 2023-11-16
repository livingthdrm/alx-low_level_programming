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
		_putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return (0);
}
