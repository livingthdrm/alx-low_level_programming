#include "main.h"
/**
 * jack_bauer - a program that prints every minute of the day
 */
void jack_bauer(void)
{
	int i = 0, j =  0;

	while (i < 24)
	{
		while (j < 60)
		{
			_putchar('0' + i + 58 + j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
