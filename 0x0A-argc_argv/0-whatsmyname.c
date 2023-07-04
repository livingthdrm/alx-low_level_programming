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
int main(int argc __attribute__((unused)), char **argv)
{

	printf("%s\n", argv[0]);

	return (0);
}
