#include "main.h"

/**
 * print_diagonal - prints diagonL lines
 *
 * @n: it is a parameter
 */
void print_diagonal(int n)
{
	int d;
	int space = 0;

	if (n > 0)
	{
		for (d = 0; d <= (n - 1); d++)
		{
			for (space = 0; space <= d; space++)
			{
				if (space != 0)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
