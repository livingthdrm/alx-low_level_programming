#include "main.h"
/**
 * jack_bauer - a program that prints every minute of the day
 */
void jack_bauer(void)
{
	int i = 0;

	while (i <= 2)
	{
		int j = 0;

		while (j <= 3)
		{
			int k = 0;

			while (k <= 5)
			{
				int l = 0;

				while (l <= 9)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(58);
					_putchar(k + '0');
					_putchar(l + '0');
					l++;
					_putchar('\n');
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
