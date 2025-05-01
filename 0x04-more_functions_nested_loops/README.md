ALX Low-Level Programming - 0x04-more_functions_nested_loops

This repository contains C programming tasks focused on:

    Character classification functions

    Mathematical operations

    Number printing patterns

    Advanced loops and conditionals

    Prime number factorization

Tasks Overview
0. isupper

📜 File: 0-isupper.c
✅ Task: Check for uppercase character.
🔹 Prototype: int _isupper(int c)
🔹 Returns:

    1 if uppercase

    0 otherwise

🔹 Example:
c

_isupper('A'); // returns 1
_isupper('a'); // returns 0

1. isdigit

📜 File: 1-isdigit.c
✅ Task: Check for digit (0-9).
🔹 Prototype: int _isdigit(int c)
🔹 Returns:

    1 if digit

    0 otherwise

🔹 Example:
c

_isdigit('5'); // returns 1
_isdigit('a'); // returns 0

2. Collaboration is Multiplication

📜 File: 2-mul.c
✅ Task: Multiply two integers.
🔹 Prototype: int mul(int a, int b)
🔹 Example:
c

mul(98, 1024); // returns 100352

3. Print Numbers

📜 File: 3-print_numbers.c
✅ Task: Print numbers 0-9 using _putchar (max 2 calls).
🔹 Prototype: void print_numbers(void)
🔹 Output:

0123456789

4. Print Most Numbers

📜 File: 4-print_most_numbers.c
✅ Task: Print numbers 0-9 (excluding 2 and 4) using _putchar (max 2 calls).
🔹 Prototype: void print_most_numbers(void)
🔹 Output:

01356789

5. More Numbers

📜 File: 5-more_numbers.c
✅ Task: Print numbers 0-14 ten times using _putchar (max 3 calls).
🔹 Prototype: void more_numbers(void)
🔹 Output:

01234567891011121314
(10 times)

6. Print Line

📜 File: 6-print_line.c
✅ Task: Draw a straight line in terminal using _.
🔹 Prototype: void print_line(int n)
🔹 Example:
c

print_line(5); // prints "_____"

7. Print Diagonal

📜 File: 7-print_diagonal.c
✅ Task: Draw a diagonal line in terminal using \.
🔹 Prototype: void print_diagonal(int n)
🔹 Example:
c

print_diagonal(3); // prints:
//  \
//   \
//    \

8. Print Square

📜 File: 8-print_square.c
✅ Task: Print a square using #.
🔹 Prototype: void print_square(int size)
🔹 Example:
c

print_square(2); // prints:
// ##
// ##

9. Fizz-Buzz

📜 File: 9-fizz_buzz.c
✅ Task: Print numbers 1-100, replacing multiples of 3 with "Fizz", multiples of 5 with "Buzz", and both with "FizzBuzz".
🔹 Output:

1 2 Fizz 4 Buzz ... 14 FizzBuzz 16 ...

10. Print Triangle

📜 File: 10-print_triangle.c
✅ Task: Print a right-aligned triangle using #.
🔹 Prototype: void print_triangle(int size)
🔹 Example:
c

print_triangle(3); // prints:
//   #
//  ##
// ###

11. Prime Factors (Advanced)

📜 File: 100-prime_factor.c
✅ Task: Find and print the largest prime factor of 612852475143.
🔹 Compile with:
sh

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm

12. Print Number (Advanced)

📜 File: 101-print_number.c
✅ Task: Print an integer using only _putchar (no arrays/pointers).
🔹 Prototype: void print_number(int n)
🔹 Example:
c

print_number(-98); // prints "-98"

Key Takeaways

✔ Mastered character classification (isupper, isdigit).
✔ Implemented mathematical operations (multiplication, prime factorization).
✔ Created complex patterns (lines, squares, triangles) with _putchar.
✔ Solved Fizz-Buzz with conditional logic.
✔ Printed numbers without standard I/O functions.
