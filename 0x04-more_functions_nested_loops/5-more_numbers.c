#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	const char *end = "\n";
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j <= 9)
			{
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
			}
			j++;
		}
		i++;
		write(1, end, 1);
	}
}
