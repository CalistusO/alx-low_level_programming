ALX TASKS FOR C - POINTERS, ARRAYS AND STRINGS

TASK 0: A function that takes a pointer to an int as parameter and updates the value it points to to 98.

TASK 1: A function that swaps the values of two integers.

TASK 2: A function that returns the length of a string.

TASK 3: A function that prints a string, followed by a new line, to stdout.

TASK 4: A function that prints a string, in reverse, followed by a new line.

TASK 5: A function that reverses a string.

TASK 6: A function that prints every other character of a string, starting with the first character, followed by a new line.

TASK 7: A function that prints half of a string, followed by a new line. 
Note: The function should print the second half of the string. If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2.

TASK 8: A function that prints n elements of an array of integers, followed by a new line.
Note: n is the number of elements of the array to be printed. Numbers must be separated by comma, followed by a space. The numbers should be displayed in the same order as they are stored in the array. You are allowed to use printf.

TASK 9: A function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest. 
Note: Return value: the pointer to dest.

TASK 10: Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers

Write a function that convert a string to an integer.

    Prototype: int _atoi(char *s);
    The number in the string can be preceded by an infinite number of characters
    You need to take into account all the - and + signs before the number
    If there are no numbers in the string, the function must return 0
    You are not allowed to use long
    You are not allowed to declare new variables of “type” array
    You are not allowed to hard-code special values
    We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.

11. Don't hate the hacker, hate the code

Create a program that generates random valid passwords for the program 101-crackme.

    You are allowed to use the standard library
    You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
    man srand, rand, time
    gdb and objdump can help

