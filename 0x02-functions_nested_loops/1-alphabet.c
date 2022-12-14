#include "main.h"
/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
