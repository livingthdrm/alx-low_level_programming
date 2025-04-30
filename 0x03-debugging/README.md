ALX Low-Level Programming - 0x03-debugging

This repository contains debugging tasks focused on:

    Testing functions with multiple main files

    Identifying and fixing infinite loops

    Correcting logical errors in comparison operations

    Handling leap year calculations

Tasks Overview
0. Multiple Mains

📜 Files: 0-main.c, main.h
✅ Task: Test the positive_or_negative() function with a case of 0.
🔹 Key Changes:

    Modified 0-main.c to test i = 0

    Kept file structure identical (only changed one line)

🔹 Output:

0 is zero

1. Like, Comment, Subscribe

📜 File: 1-main.c
✅ Task: Fix an infinite loop by commenting out problematic code.
🔹 Problem:
c

while (i < 10)
{
    putchar(i);  // Infinite loop (i never increments)
}

🔹 Solution:
c

// while (i < 10)
// {
//     putchar(i);
// }

🔹 Output:

Infinite loop incoming :(
Infinite loop avoided! \o/

2. 0 > 972?

📜 Files: 2-largest_number.c, main.h
✅ Task: Fix logic to correctly identify the largest of three numbers.
🔹 Original Bug:
c

if (a > b && b > c)  // Incorrect logic
{
    largest = a;
}

🔹 Fixed Logic:
c

if (a >= b && a >= c)
{
    largest = a;
}
else if (b >= a && b >= c)
{
    largest = b;
}
else
{
    largest = c;
}

🔹 Output:

972 is the largest number

3. Leap Year

📜 Files: 3-print_remaining_days.c, main.h
✅ Task: Fix leap year calculations for February 29th.
🔹 Original Bug:
c

if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))

🔹 Fixed Logic:
c

if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))

🔹 Output for 02/29/2000:

Date: 02/29/2000
Day of the year: 60
Remaining days: 306

Key Fixes

✔ Corrected logical conditions for number comparisons.
✔ Fixed leap year detection (properly handles 400/100/4 rules).
✔ Removed infinite loops by commenting out faulty code.
