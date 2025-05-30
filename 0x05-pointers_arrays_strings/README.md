ALX Low-Level Programming - 0x05-pointers_arrays_strings

This repository contains C programming tasks focused on:

    Pointer manipulation

    Array operations

    String handling

    Memory management

    Advanced algorithms

Tasks Overview
0. 98 Battery St.

📜 File: 0-reset_to_98.c
✅ Task: Update a pointer's value to 98.
🔹 Prototype: void reset_to_98(int *n)
🔹 Example:
c

int n = 402;
reset_to_98(&n); // n now equals 98

1. Don't Swap Horses

📜 File: 1-swap.c
✅ Task: Swap values of two integers using pointers.
🔹 Prototype: void swap_int(int *a, int *b)
🔹 Example:
c

int a = 98, b = 42;
swap_int(&a, &b); // a=42, b=98

2. String Length

📜 File: 2-strlen.c
✅ Task: Calculate string length without standard library.
🔹 Prototype: int _strlen(char *s)
🔹 Example:
c

_strlen("Hello"); // returns 5

3. I Do Not Fear Computers

📜 File: 3-puts.c
✅ Task: Print string followed by newline using _putchar.
🔹 Prototype: void _puts(char *str)
🔹 Output:

I fear the lack of them - Isaac Asimov

4. Reverse Printing

📜 File: 4-print_rev.c
✅ Task: Print string in reverse.
🔹 Prototype: void print_rev(char *s)
🔹 Example:
c

print_rev("Hello"); // prints "olleH"

5. String Reversal

📜 File: 5-rev_string.c
✅ Task: Reverse a string in place.
🔹 Prototype: void rev_string(char *s)
🔹 Modifies Input:
c

char s[] = "School";
rev_string(s); // s becomes "loohcS"

6. Skip Printing

📜 File: 6-puts2.c
✅ Task: Print every other character.
🔹 Prototype: void puts2(char *str)
🔹 Example:
c

puts2("0123456789"); // prints "02468"

7. Half String

📜 File: 7-puts_half.c
✅ Task: Print second half of string.
🔹 Prototype: void puts_half(char *str)
🔹 Handles Odd Lengths:
c

puts_half("01234"); // prints "34"

8. Array Printing

📜 File: 8-print_array.c
✅ Task: Print n elements of an array.
🔹 Prototype: void print_array(int *a, int n)
🔹 Output Format:

98, 402, -1024

9. String Copy

📜 File: 9-strcpy.c
✅ Task: Copy string including null byte.
🔹 Prototype: char *_strcpy(char *dest, char *src)
🔹 Returns: Pointer to dest
10. String to Integer (Advanced)

📜 File: 100-atoi.c
✅ Task: Convert string to integer with edge cases.
🔹 Prototype: int _atoi(char *s)
🔹 Handles:

    Leading whitespace

    Multiple +/- signs

    Non-digit characters

🔹 Example:
c

_atoi("  -+--123abc"); // returns -123

11. Password Generator (Advanced)

📜 File: 101-keygen.c
✅ Task: Generate valid passwords for 101-crackme.
🔹 Requirements:

    Uses rand(), srand(), time()

    Passes 101-crackme check

🔹 Usage:
sh

./101-crackme "$(./101-keygen)"

Key Takeaways

✔ Mastered pointer arithmetic and dereferencing
✔ Implemented string operations without standard library
✔ Developed in-place array/string manipulation
✔ Created advanced conversion algorithms
✔ Built a password generator with random number generation

🚀 Happy Coding!
