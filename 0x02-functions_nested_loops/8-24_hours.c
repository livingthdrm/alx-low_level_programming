#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - a function that prints all the 24 hours in a day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour = 0, minutes;

	while (hour < 24)
	{
		minutes = 0;

		while (minutes < 60)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + minutes / 10);
			_putchar('0' + minutes % 10);
			_putchar('\n');
			minutes++;
		}
	hour++;
	}
}
