#include <stdio.h>

/**
 * main - prints alphabet in lowercase except q and e
 *
 * Return: always 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
