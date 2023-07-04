#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main -  A program that prints its name followed by a new line
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
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
