#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i = 0;
	inj j = 0;

	while (i <= 10)
	{
		while (j <= 14)
		{
			_putchar('0' + j);
			j++;
		}
		i++;
		_putchar('\n');
	}
}

