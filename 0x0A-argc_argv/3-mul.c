#include "main.h"

/**
 * main - a program that multiples two integers
 * @argc: number of parameters (3)
 * @argv: parameters
 */
int main(int argc, char **argv)
{
	int result;

	result = atoi(argv[1]) * atoi(argv[2]);
	(void)argc;
	printf("%d\n", result);
	return (0);
}
