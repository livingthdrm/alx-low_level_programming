🚀 String Manipulation & Advanced C Programming 🚀

Welcome to "Pointers, Arrays & Strings - Part 2", where we dive deeper into string manipulation, memory operations, and advanced C programming techniques!

From concatenating strings to encoding in 1337 (leet speak), these tasks will sharpen your low-level programming skills. Let’s get started!
🔥 Task List
0. _strcat (0-strcat.c)

💡 Mission: Merge two worlds!
A function that concatenates two strings, appending src to dest (including \0).
🔹 Prototype: char *_strcat(char *dest, char *src);
1. _strncat (1-strncat.c)

💡 Mission: Controlled merge!
A function that concatenates two strings, using at most n bytes from src.
🔹 Prototype: char *_strncat(char *dest, char *src, int n);
2. _strncpy (2-strncpy.c)

💡 Mission: Precision copy!
A function that copies a string exactly like strncpy.
🔹 Prototype: char *_strncpy(char *dest, char *src, int n);
3. _strcmp (3-strcmp.c)

💡 Mission: Compare the uncompared!
A function that compares two strings like strcmp.
🔹 Prototype: int _strcmp(char *s1, char *s2);
4. reverse_array (4-rev_array.c)

💡 Mission: Flip it like it's hot!
A function that reverses an array of integers.
🔹 Prototype: void reverse_array(int *a, int n);
5. string_toupper (5-string_toupper.c)

💡 Mission: Shout it out!
A function that changes all lowercase letters in a string to uppercase.
🔹 Prototype: char *string_toupper(char *);
6. cap_string (6-cap_string.c)

💡 Mission: Capitalize every word!
A function that capitalizes all words in a string.
🔹 Prototype: char *cap_string(char *);
7. leet (7-leet.c)

💡 Mission: Encode in 1337 (leet speak)!
A function that encodes a string into 1337 (replacing certain letters with numbers).
🔹 Prototype: char *leet(char *);
🚀 Advanced Missions
8. rot13 (100-rot13.c)

💡 Mission: The secret cipher!
A function that encodes a string using ROT13 (a simple letter substitution cipher).
🔹 Prototype: char *rot13(char *);
9. print_number (101-print_number.c)

💡 Mission: Print an integer—without printf!
A function that prints an integer using only _putchar.
🔹 Prototype: void print_number(int n);
10. Infinite Add (103-infinite_add.c)

💡 Mission: Add two giant numbers!
A function that adds two numbers stored as strings and returns the result in a buffer.
🔹 Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r);
11. Print Buffer (104-print_buffer.c)

💡 Mission: Inspect memory like a pro!
A function that prints a buffer in a formatted hex/ASCII view (10 bytes per line).
🔹 Prototype: void print_buffer(char *b, int size);
⚡ How to Test

Each task includes a main file for testing.
Example for Task 0 (_strcat):
bash

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
./0-strcat

Output:
text

Hello  
World!  
Hello World!  
World!  
Hello World!  

Success! The strings were concatenated correctly.
🏆 Final Words

This project takes you through string manipulation, memory operations, and advanced C techniques, preparing you for low-level programming challenges.

🔗 Repository: alx-low_level_programming
📂 Directory: 0x06-pointers_arrays_strings

Happy coding! 💻🔥
