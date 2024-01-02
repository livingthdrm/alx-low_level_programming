#include "main.h"

/**
 * a program that prints its name
 * @argc: number of parameters
 * @**argv: variables
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}	
