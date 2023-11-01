#include <stdio.h>
#include <unistd.h>

/**
 * main - prints a string to stderr
 *
 * Return: on success  1
 */
int main(void)
{
	char *string[100];

	*string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	return (write(2, *string, 59));
}
