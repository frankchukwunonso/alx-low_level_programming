#include "main.h"

/**
 * times_table - print times table
 */
void times_table(void)
{
	int row, col, d; /* declare varieables to be used in the function */

	for (col = 0; col <= 9; col++)  /* creates colunm loop */
	{
		for (row = 0; row <= 9; row++) /* creates row loop */
		{
			d = (row * col);
			if (row > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (((d / 10) == 0) && ((row > 0)))
			{
				_putchar(' ');
			}
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + 48);
			}
			_putchar((d % 10) + 48);
		}
		_putchar('\n');
	}
}
