#include "main.h"

/**
 * main - a program that multiples two integers
 * @argc: number of parameters (3)
 * @argv: parameters
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("Error");
	}
	else
	{
	result = atoi(argv[1]) * atoi(argv[2]);
	(void)argc;
	printf("%d\n", result);
	}
	return (0);
}
