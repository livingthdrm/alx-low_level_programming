#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the number stored in the variable n
 *
 * Return: 0
 */
int main(void)
{
	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	while (n != '\0')
	{
		i = n % 10;
		n /= 10;
		if (i > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, i);
		}
		else if (i == 0)
		{
			printf("Last digit of %d is %d and is zero\n", n, i);
		}
		else
		{
			printf("Last digit of %d is %d \
					and is less than 6 and not 0\n", n, i);
		}
	}
	return (0);
}
