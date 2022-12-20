#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: it's a pointer parameter
 * @b: it's a pointer parameter
 */
void swap_int(int *a, int *b)
{
	int *c;
	int f = 9;

	c = &f;
	*c = *a;
	*a = *b;
	*b = *c;
}
