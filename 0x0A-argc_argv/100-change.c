#include "main.h"
/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: the argument count
 * @argv: the arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int result = 0, c1, c2, c5, c10, c25;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		c25 = atoi(argv[1]) / 25;
		c10 = (atoi(argv[1]) - (25 * c25)) / 10;
		c5 = (atoi(argv[1]) - (25 * c25) - (10 * c10)) / 5;
		c2 = (atoi(argv[1]) - (25 * c25) - (10 * c10) - (5 * c5)) / 2;
		c1 = (atoi(argv[1]) - (25 * c25) - (10 * c10) - (5 * c5) - (2 * c2));
		result = c1 + c2 + c5 + c10 + c25;
		printf("%d\n", result);
	}
	return (0);
}
