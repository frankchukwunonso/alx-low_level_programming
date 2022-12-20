#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: it's a pointer parameter
 * @b: it's a pointer parameter
 */
void swap_int(int *a, int *b)
{
	int *c;
	
	*c = *a;
	*a = *b;
	*b = *c;
}
