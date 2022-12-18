#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: it is a parameter
 */
void print_triangle(int size)
{
	int tri;
	int space;

	if (size > 0)
	{
		for (tri = 0; tri <= (size - 1); tri++)
		{
			for (space = 0; space <= size; space++)
			{
				if (space != 0)
				{
					_putchar(' ');
				}
			}
			_putchar('#');
			_putchar('\n';
		}
	}
	else
	{
		_putchar('\n');
	}
}
