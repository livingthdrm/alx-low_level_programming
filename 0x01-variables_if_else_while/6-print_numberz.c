#include <stdio.h>

/**
 * main - entry point of program
 *
 * description - A program that prints the alphabet all
 * single digit numbers of base 10 starting from 0
 *
 * Return: Always (0)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
