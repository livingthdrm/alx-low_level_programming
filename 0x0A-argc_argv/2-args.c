#include "main.h"

/**
 * main - a program that prints all arguments
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	}
	printf("\n");
	return (0);
}
