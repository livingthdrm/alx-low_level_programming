#include <stdio.h>
#include <unistd.h>

/**
 * main - prints a string to stderr
 *
 * Return - to be  1
 */
int main(void)
{
	char *string[100];

	*string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, &string, 1);
	return (1);
}
