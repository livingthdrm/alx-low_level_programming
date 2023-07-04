#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%d\n", argc);

	return (0);
}
