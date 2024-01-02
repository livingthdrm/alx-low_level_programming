#include "main.h"

/**
 * main - a function that add all the main arguments
 * @argc: number of arguments
 * @argv: the arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int result = 0, i;

	if (argc <= 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) % 1 == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result += atoi(argv[i]);
			}
			}
		printf("%d\n", result);
	}
	return (0);
}
