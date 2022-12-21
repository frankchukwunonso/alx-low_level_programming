#include "main.h"

/**
 * print_array - prints elements of array
 * @a: it is a pointer parameter
 * @n: it is aparameter
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d%", a[i]);
	}
	_putchar('\n');
}
