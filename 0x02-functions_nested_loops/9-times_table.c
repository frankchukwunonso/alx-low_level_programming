#include "main.h"

/**
 * times_table - print times table
 */
void times_table(void)
{
	int row, col, d;

	for (col = 0; col <= 9; col++)
	{
		for (row = 0; row <= 9; row++)
		{
			d = row * col;
			_putchar(d);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
