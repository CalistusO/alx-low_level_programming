**ALX Tasks for C - Recursion**  

**Requirement**  
**General**  
1. Allowed editors: vi, vim, emacs  
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89  
3. All your files should end with a new line  
4. A README.md file, at the root of the folder of the project is mandatory  
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl  
6. You are not allowed to use global variables  
7. No more than 5 functions per file  
8. You are not allowed to use the standard library. Any use of functions like printf, puts, etc... is forbidden  
9. You are allowed to use _putchar  
10. You don't have to push _putchar.c, we will use our file. If you do it won't be taken into account  

11. In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples  
12. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h  
13. Don't forget to push your header file  
14. You are not allowed to use any kind of loops  
15. You are not allowed to use static variables  

**Task 0:** **[0-puts_recursion.c](0-puts_recursion.c)**  
Write a function that prints a string, followed by a new line.  
* Prototype: void _puts_recursion(char *s);  
FYI: The standard library provides a similar function: puts. Run man puts to learn more.  

**Task 1:** **[1-print_rev_recursion.c](1-print_rev_recursion.c)**  
Write a function that prints a string in reverse.  
* Prototype: void _print_rev_recursion(char *s);  

**Task 2:** **[2-strlen_recursion.c](2-strlen_recursion.c)**  
Write a function that returns the length of a string.  
* Prototype: int _strlen_recursion(char *s);  
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.  

**Task 3:** **[3-factorial.c](3-factorial.c)**  
Write a function that returns the factorial of a given number.  
* Prototype: int factorial(int n);  
* If n is lower than 0, the function should return -1 to indicate an error  
* Factorial of 0 is 1  

**Task 4:** **[4-pow_recursion.c](4-pow_recursion.c)**  
Write a function that returns the value of x raised to the power of y.  
* Prototype: int _pow_recursion(int x, int y);  
* If y is lower than 0, the function should return -1  
FYI: The standard library provides a different function: pow. Run man pow to learn more.  

**Task 5:** **[5-sqrt_recursion.c](5-sqrt_recursion.c)**  
Write a function that returns the natural square root of a number.  
* Prototype: int _sqrt_recursion(int n);  
* If n does not have a natural square root, the function should return -1  
FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.  

**Task 6:** **[6-is_prime_number.c](6-is_prime_number.c)**  
Write a function that returns 1 if the input integer is a prime number, otherwise return 0.  
* Prototype: int is_prime_number(int n);  

**Task 7:** **[100-is_palindrome.c](100-is_palindrome.c)**  
Write a function that returns 1 if a string is a palindrome and 0 if not.  
* Prototype: int is_palindrome(char *s);  
* An empty string is a palindrome  

**Task 8:** **[101-wildcmp.c](101-wildcmp.c)**  
Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.  
* Prototype: int wildcmp(char *s1, char *s2);  
* s2 can contain the special character *.  
* The special char * can replace any string (including an empty string)  
