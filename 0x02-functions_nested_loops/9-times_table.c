#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i = 0;
	int answer = 0;
	int j = 0;

	while (i <= 9)
	{
		_putchar('0' + i);

		while (j <= 9)
		{
			_putchar('0' + j);
			j++;
		}
		_putchar('\n');
		i++;
	}
	answer = i * j;

	_putchar('0' + answer);
	_putchar(44);
	_putchar('\n');
	i++;
	}
}
