#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9
 * Description: You can only use _putchar twice
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
		_putchar(x + '0');
	_putchar('\n');
}
