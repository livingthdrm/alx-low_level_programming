#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function to print all natural numbers to 98
 * @n: the number to begin
 *
 */
void print_to_98(int n)
{
	if (n < 98)
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		n--;
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
