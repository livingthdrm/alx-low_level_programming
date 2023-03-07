#include "main.h"
#include <unistd.h>

/**
 * main - entry point
 *
 * description - A program that prints _putchar
 *
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
