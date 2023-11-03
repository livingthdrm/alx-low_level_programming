#include <stdio.h>

/**
 * main - prints alphabet in lowercase and then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
		while (d <= 'Z')
		{
			putchar(d);
			d++;
		}
	}
	putchar('\n');
}
