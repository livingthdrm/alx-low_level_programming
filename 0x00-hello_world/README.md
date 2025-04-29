ALX Low-Level Programming - 0x00-hello_world

This repository contains introductory C programming tasks covering:

    Preprocessing

    Compilation

    Assembly

    Basic I/O (puts, printf)

    Data type sizes

    Advanced assembly (Intel syntax)

    Writing to stderr

Tasks Overview
0. Preprocessor

📜 Script: 0-preprocessor
✅ Task: Run a C file ($CFILE) through the preprocessor and save the result in c.
🔹 Example:
sh

export CFILE=main.c
./0-preprocessor

1. Compiler

📜 Script: 1-compiler
✅ Task: Compile a C file ($CFILE) into an object file (.o).
🔹 Example:
sh

export CFILE=main.c
./1-compiler  # Output: main.o

2. Assembler

📜 Script: 2-assembler
✅ Task: Generate assembly code from a C file ($CFILE) and save it as .s.
🔹 Example:
sh

export CFILE=main.c
./2-assembler  # Output: main.s

3. Name the Executable

📜 Script: 3-name
✅ Task: Compile $CFILE into an executable named cisfun.
🔹 Example:
sh

export CFILE=main.c
./3-name  # Creates: cisfun

4. Hello, puts

📜 File: 4-puts.c
✅ Task: Print "Programming is like building a multilingual puzzle" using puts.
🔹 Constraints:

    No printf

    Must return 0

🔹 Compile & Run:
sh

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o puts
./puts

5. Hello, printf

📜 File: 5-printf.c
✅ Task: Print "with proper grammar, but the outcome is a piece of art," using printf.
🔹 Constraints:

    No puts

    Must return 0

    No compiler warnings (-Wall)

🔹 Compile & Run:
sh

gcc -Wall -Wextra -pedantic -std=gnu89 5-printf.c -o printf
./printf

6. Size is Not Grandeur

📜 File: 6-size.c
✅ Task: Print the size of various data types (char, int, long, long long, float).
🔹 Example Output:
sh

Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)

🔹 Compile & Run (32-bit vs 64-bit):
sh

gcc 6-size.c -m32 -o size32  # 32-bit
gcc 6-size.c -m64 -o size64  # 64-bit
./size32
./size64

7. Intel Assembly (Advanced)

📜 Script: 100-intel
✅ Task: Generate Intel-syntax assembly from $CFILE and save as .s.
🔹 Example:
sh

export CFILE=main.c
./100-intel  # Output: main.s (Intel syntax)

8. UNIX Quote (Advanced)

📜 File: 101-quote.c
✅ Task: Print to stderr:
"and that piece of art is useful\" - Dora Korpar, 2015-10-19"
🔹 Constraints:

    No printf or puts

    Must return 1

    No compiler warnings (-Wall)

🔹 Compile & Run:
sh

gcc -Wall -Wextra -pedantic -std=gnu89 101-quote.c -o quote
./quote  # Output to stderr

How to Compile & Run

All scripts assume $CFILE is set:
sh

export CFILE=main.c

For C files:
sh

gcc -Wall -Wextra -pedantic -std=gnu89 <file.c> -o <output>
./<output>

Key Takeaways

✔ Preprocessor → Compiler → Assembler → Linking workflow.
✔ puts vs printf (and when to use each).
✔ Data type sizes vary between 32-bit and 64-bit systems.
✔ Intel vs AT&T assembly syntax.
✔ Writing to stderr without printf/puts.
