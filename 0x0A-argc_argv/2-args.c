#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: prints number of arguments
 * @argv: prints arguments
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
