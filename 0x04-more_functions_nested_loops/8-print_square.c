#include "main.h"

/**
 * print_square - it prints square of given size
 *
 * @size: it is a parameter
 */
void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		for (col = 0; col <= (size - 1); col++)
		{
			for (row = 0; row <= (size - 1); row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
