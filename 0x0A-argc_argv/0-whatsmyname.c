#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main -  A program that prints its name followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	char *pname = strrchr(argv[0], '/');

	if (pname == NULL)
	{
		pname = argv[0];
	}
	else
	{
		pname++;
	}
	printf("%s\n", pname);

	return (0);
}
