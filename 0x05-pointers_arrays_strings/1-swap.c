#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: one of the integers to be swaped
 * @b: the second integer to be swaped
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
