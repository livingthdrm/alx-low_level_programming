#include <stdio.h>
#include <unistd.h>

/**
 * main - prints a string to stderr
 *
 * return: 1
 */
int main(void)
{
	char *string[];

	*string = ["and that piece of art is useful\" - Dora Korpar, 2015-10-19"];
	write(2, *string, 59);
	return (1);
}	
