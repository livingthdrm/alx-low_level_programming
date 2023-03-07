#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * The program prints out the last digit of a random number
 * Return: Always (0)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	int last_digit = n % 10;

	printf("Last digit of %d is \n", n);
	if (last_digit > 5)
	{
		printf("%d and is greater that 5\n", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("%d and is 0\n", last_digit);
	}
	else 
	{
		printf("%d and is less that 6 and not 0\n", last_digit);
	}

	return (0);
}
