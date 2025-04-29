ALX Low-Level Programming - 0x02-functions_nested_loops

This repository contains C programming tasks focused on:

    Functions and nested loops

    Character manipulation with _putchar

    Mathematical operations

    Fibonacci sequence generation

    Time tables and number sequences

Tasks Overview
0. _putchar

📜 File: 0-putchar.c
✅ Task: Print _putchar followed by a new line.
🔹 Constraints:

    Must use _putchar function

    Return 0

🔹 Output:

_putchar

1. Alphabet Game

📜 File: 1-alphabet.c
✅ Task: Print lowercase alphabet using _putchar (max 2 calls).
🔹 Prototype: void print_alphabet(void)
🔹 Output:

abcdefghijklmnopqrstuvwxyz

2. 10 x Alphabet

📜 File: 2-print_alphabet_x10.c
✅ Task: Print alphabet 10 times using _putchar (max 2 calls).
🔹 Prototype: void print_alphabet_x10(void)
🔹 Output:

abcdefghijklmnopqrstuvwxyz
(10 times)

3. islower Check

📜 File: 3-islower.c
✅ Task: Check for lowercase character.
🔹 Prototype: int _islower(int c)
🔹 Returns:

    1 if lowercase

    0 otherwise

🔹 Example:
c

_islower('a'); // returns 1
_islower('A'); // returns 0

4. isalpha Check

📜 File: 4-isalpha.c
✅ Task: Check for alphabetic character (lowercase/uppercase).
🔹 Prototype: int _isalpha(int c)
🔹 Returns:

    1 if letter

    0 otherwise

🔹 Example:
c

_isalpha('Z'); // returns 1
_isalpha('!'); // returns 0

5. Sign Printer

📜 File: 5-sign.c
✅ Task: Print the sign of a number (+, 0, -).
🔹 Prototype: int print_sign(int n)
🔹 Returns:

    1 if n > 0

    0 if n = 0

    -1 if n < 0

🔹 Example Output:

+, 1
0, 0
-, -1

6. Absolute Value

📜 File: 6-abs.c
✅ Task: Compute absolute value of an integer.
🔹 Prototype: int _abs(int)
🔹 Example:
c

_abs(-98); // returns 98

7. Last Digit Printer

📜 File: 7-print_last_digit.c
✅ Task: Print and return the last digit of a number.
🔹 Prototype: int print_last_digit(int)
🔹 Example Output:

8044  // (for inputs 98, 0, -1024)

8. Jack Bauer's Day

📜 File: 8-24_hours.c
✅ Task: Print every minute of a 24-hour day (00:00 to 23:59).
🔹 Prototype: void jack_bauer(void)
🔹 Output:

00:00
00:01
...
23:59

9. Times Table

📜 File: 9-times_table.c
✅ Task: Print the 9 times table (0-9).
🔹 Prototype: void times_table(void)
🔹 Output:

0,  0,  0, ...
0,  1,  2, ...
...
0,  9, 18, ...

10. Addition

📜 File: 10-add.c
✅ Task: Add two integers and return the result.
🔹 Prototype: int add(int, int)
🔹 Example:
c

add(89, 9); // returns 98

11. Print to 98

📜 File: 11-print_to_98.c
✅ Task: Print all numbers from n to 98.
🔹 Prototype: void print_to_98(int n)
🔹 Example Output:

0, 1, 2, ..., 98
111, 110, ..., 98
-10, -9, ..., 98

12. Advanced Times Table

📜 File: 100-times_table.c
✅ Task: Print n times table (0-15).
🔹 Prototype: void print_times_table(int n)
🔹 Constraints:

    Do not print if n > 15 or n < 0

🔹 Output:

0,   0,   0, ...
0,   1,   2, ...
...
0,  12, 24, ...

13. Sum of Multiples (Advanced)

📜 File: 101-natural.c
✅ Task: Compute sum of multiples of 3 or 5 below 1024.
🔹 Output:

23  // (for numbers below 10)

14. Fibonacci 50 (Advanced)

📜 File: 102-fibonacci.c
✅ Task: Print first 50 Fibonacci numbers (starting 1, 2).
🔹 Output:

1, 2, 3, 5, 8, ..., 12586269025

15. Even Fibonacci Sum (Advanced)

📜 File: 103-fibonacci.c
✅ Task: Sum even Fibonacci numbers below 4,000,000.
🔹 Output:

4613732

16. Fibonacci 98 (Advanced)

📜 File: 104-fibonacci.c
✅ Task: Print first 98 Fibonacci numbers (without long long, arrays, etc.).
🔹 Constraints:

    No hardcoding except 1 and 2

    Must handle large numbers

🔹 Output:

1, 2, 3, ..., 218922995834555169026

Key Takeaways

✔ Mastered _putchar usage under strict call limits.
✔ Implemented mathematical operations (absolute value, sign checks).
✔ Generated sequences (times tables, Fibonacci).
✔ Worked with constraints (no long long, no arrays).
