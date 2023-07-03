#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - checks if an int is prime number or not
 * @n: number to test
 *
 * Return: 1 if n is prime, 0 is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (actual_prime(n, n - 1));
	}
}

/**
 * actual_prime - calculates prime numbers using recursion
 * @n: number to test
 * @i: looper
 *
 * Return: 1 is n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (actual_prime(n, i - 1));
	}
}
