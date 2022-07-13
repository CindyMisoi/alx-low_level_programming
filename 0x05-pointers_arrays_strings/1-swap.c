#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: the first integer to be swapped
 * @b: the second integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
