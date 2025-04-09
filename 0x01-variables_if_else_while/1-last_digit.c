#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that checks what the last digit of a number is
 *
 * Return: always 0
*/
int main(void)
{
	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	if (i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, i);
	}
	else if (i == 0)
	{
		printf("Last digit of %d is %d and is 0", n, i);
	}
	else
	{
		printf("Last digit of %d is %555d and is less than 6 and not 0", n, i);
	}
	return (0);
}
