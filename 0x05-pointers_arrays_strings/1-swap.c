#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 * t - a temporary variable where we hold the value of *a
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
