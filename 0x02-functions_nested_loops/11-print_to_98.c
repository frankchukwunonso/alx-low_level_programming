#include "main.h"
/**
 * print_to_98
 *
 * @n: it is a parameter
 *
 * Return: returns void
 */
void print_to_98(int n)
{
	int d;

	if (n <= 98)
	{
		for (d = n; d <= 98; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
	else
	{
		for (d = n; d >= 98; d--)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
