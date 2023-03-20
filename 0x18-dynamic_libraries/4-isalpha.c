#include "main.h"
/**
 * _isalpha - checks for alphabetical characters
 * @c: a character to be checked on
 * Return: 1 if alphabetical character, lowercase or uppercase, and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
