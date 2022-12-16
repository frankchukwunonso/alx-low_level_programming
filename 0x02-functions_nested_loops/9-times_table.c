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
			if ((d / 10) == 0) /* for numbers, for 0 - 9 */
			{
				putchar((d / 10) + 48);
				putchar((d % 10) + 48);
				if (!(row == 9))
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
				}
			}
			else
			{
				putchar((d / 10) + 48);
				putchar((d % 10) + 48);
				if (!(row == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}
	return (0);
}
