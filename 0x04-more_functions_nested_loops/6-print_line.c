#include "main.h"

/**
 * print_line - literally prints line
 *
 * @n: it is a parameter
 */
void print_line(int n)
{
	int line;

	for (line = 0; line <= n; line++)
	{
		if (n > 0)
		{
			_putchar('-');
		}
	}
	_putchar('\n');
}


