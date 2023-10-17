#include <stdio.h>
/**
 * printAddresses: This program demonstrates printing the addresses of an initialized int,
 * char, pointer, string and array
 *
 */
void printAddresses()
{
	int num = 42;
	char letter = 'A';
	int *ptr = &num;
	char str[] = "Hello";
	int arr[] = {1, 2, 3, 4, 5};

	printf("Address of int: %p\n", (void *)&num);
	printf("Address of char: %p\n", (void *)&letter);
	printf("Address of pointer: %p\n", (void *)&ptr);
	printf("Address of string: %p\n", (void *)str);
	printf("Address of array: %p\n", (void *)arr);
}

/**
 * main: calls the function printAddresses
 *
 * return - 0;
 */

int main()
{
	printAddresses();
	return (0);
}
