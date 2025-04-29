ALX Low-Level Programming - 0x01-variables_if_else_while

This repository contains C programming tasks focused on:

    Variables, if/else, and while loops

    Random number generation

    Character manipulation with putchar

    Number printing and combinations

Tasks Overview
0. Positive or Negative

📜 File: 0-positive_or_negative.c
✅ Task: Assign a random number to n and print whether it's positive, negative, or zero.
🔹 Constraints:

    Must use if, else if, else

    Output format: "<n> is positive/negative/zero"

🔹 Compile & Run:
sh

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o positive_or_negative
./positive_or_negative

1. The Last Digit

📜 File: 1-last_digit.c
✅ Task: Print the last digit of a random number with conditions:

    > 5: "and is greater than 5"

    = 0: "and is 0"

    < 6 && != 0: "and is less than 6 and not 0"

🔹 Example Output:
sh

Last digit of 629438752 is 2 and is less than 6 and not 0

2. Alphabet Game

📜 File: 2-print_alphabet.c
✅ Task: Print the lowercase alphabet using putchar (max 2 calls).
🔹 Constraints:

    No printf, puts

    Only main function

🔹 Output:
sh

abcdefghijklmnopqrstuvwxyz

3. alphABET

📜 File: 3-print_alphabets.c
✅ Task: Print lowercase and uppercase alphabets using putchar (max 3 calls).
🔹 Output:
sh

abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ

4. Alphabet Soup

📜 File: 4-print_alphabt.c
✅ Task: Print the alphabet except q and e using putchar (max 2 calls).
🔹 Output:
sh

abcdfghijklmnoprstuvwxyz

5. Numbers

📜 File: 5-print_numbers.c
✅ Task: Print single-digit numbers (0-9).
🔹 Output:
sh

0123456789

6. Numberz

📜 File: 6-print_numberz.c
✅ Task: Print 0-9 using putchar (max 2 calls, no char variables).
🔹 Output:
sh

0123456789

7. Smile in the Mirror

📜 File: 7-print_tebahpla.c
✅ Task: Print the lowercase alphabet in reverse using putchar (max 2 calls).
🔹 Output:
sh

zyxwvutsrqponmlkjihgfedcba

8. Hexadecimal

📜 File: 8-print_base16.c
✅ Task: Print base-16 numbers (0-9, a-f) using putchar (max 3 calls).
🔹 Output:
sh

0123456789abcdef

9. Combinations

📜 File: 9-print_comb.c
✅ Task: Print all possible single-digit combinations (, separated) using putchar (max 4 calls).
🔹 Output:
sh

0, 1, 2, 3, 4, 5, 6, 7, 8, 9

10. Advanced Combinations (Two Digits)

📜 File: 100-print_comb3.c
✅ Task: Print unique two-digit combinations (ascending order) using putchar (max 5 calls).
🔹 Output:
sh

01, 02, 03, ..., 98, 99

11. Advanced Combinations (Three Digits)

📜 File: 101-print_comb4.c
✅ Task: Print unique three-digit combinations (ascending order) using putchar (max 6 calls).
🔹 Output:
sh

012, 013, 014, ..., 789

12. Software is Eating the World

📜 File: 102-print_comb5.c
✅ Task: Print all combinations of two two-digit numbers (00-99) using putchar (max 8 calls).
🔹 Output:
sh

00 01, 00 02, ..., 98 99

Key Takeaways

✔ Mastered if/else and loops for conditional logic.
✔ Used putchar efficiently under strict constraints.
✔ Generated combinations of numbers in ascending order.
✔ Worked with random numbers and last-digit extraction.
