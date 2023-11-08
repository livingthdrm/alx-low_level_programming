#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * @n: number to evaluate
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d, ", n):
			n++;
		}
	}
	printf("\n");
}
