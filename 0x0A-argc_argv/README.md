**ALX Tasks For C - argc, argv**  

**Requirements**  
**General**  
Allowed editors: vi, vim, emacs  
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89  
All your files should end with a new line  
A README.md file, at the root of the folder of the project is mandatory  
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl  
You are not allowed to use global variables  
No more than 5 functions per file  
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h  
Don't forget to push your header file  
You are allowed to use the standard library  


**Task 0:** **[0-whatsmyname.c](0-whatsmyname.c)**  
Write a program that prints its name, followed by a new line.  
* If you rename the program, it will print the new name, without having to compile it again  
* You should not remove the path before the name of the program  

**Task 1:** **[1-args.c](1-args.c)**  
Write a program that prints the number of arguments passed into it.  
* Your program should print a number, followed by a new line  

**Task 2:** **[2-args.c](2-args.c)**  
Write a program that prints all arguments it receives.  
* All arguments should be printed, including the first one  
* Only print one argument per line, ending with a new line  

**Task 3:** **[3-mul.c](3-mul.c)**  
Write a program that multiplies two numbers.  
* Your program should print the result of the multiplication, followed by a new line  
* You can assume that the two numbers and result of the multiplication can be stored in an integer  
* If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return `1`  

**Task 4:** **[4-add.c](4-add.c)**  
Write a program that adds positive numbers.  
* Print the result, followed by a new line  
* If no number is passed to the program, print 0, followed by a new line  
* If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return `1`  
* You can assume that numbers and the addition of all the numbers can be stored in an `int`  

**Task 5:** **[100-change.c](100-change.c)**  
Write a program that prints the minimum number of coins to make change for an amount of money.  
* Usage: `./change cents`  
* where `cents` is the amount of cents you need to give back  
* if the number of arguments passed to your program is not exactly `1`, print `Error`, followed by a new line, and return `1`  
* you should use `atoi` to parse the parameter passed to your program  
* If the number passed as the argument is negative, print `0`, followed by a new line  
* You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
