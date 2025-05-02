#include <stdio.h>
#include "main.h"

/**
 * fizzbuzz - a function to print out fizzbuzz (classic)
*/
void fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

/**
 * main - a function to test the FizzBuzz function
 * Return: Always 0
 */
int main(void)
{
	fizzbuzz();
	return (0);
}
