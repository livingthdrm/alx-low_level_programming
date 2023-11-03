#include <stdio.h>

/**
 * main - prints alphabet in lowercase except q and e
 *
 * Return: always 0
 */
int main(void)
{
	char i = 'a';
	char j = 'f';

	while (i != 'e')
	{
		while (j != 'q')
		{
			putchar(j);
			j++;
		}
	}
	putchar('\n');
	return (0);
}
