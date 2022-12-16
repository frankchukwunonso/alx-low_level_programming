#include "main.h"

/**
 * times_table - print times table
 */
void times_table(void)
{
	int row, col, d;

	for (col = '0'; col <= '9'; col++)
	{
		for (row = '0'; row <= '9'; row++)
		{
			d = row * col;
			_putchar(d);
			if (row != '9')
			{
				_putchar(',');
				_putchar(' ');
				if ((d % 10) == 0)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
