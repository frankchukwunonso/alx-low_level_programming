#include "main.h"

/**
 * print_diagonal - prints diagonL lines
 *
 * @n: it is a parameter
 */
void print_diagonal(int n)
{
	int d;

	if (n > 0)
	{
		for (d = 0; d <= (n - 2); d++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
	_putchar('\n');
}
