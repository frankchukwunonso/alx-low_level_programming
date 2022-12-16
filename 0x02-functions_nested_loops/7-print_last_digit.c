#include "main.h"

/**
 * print_last_digit - printsnlast digit
 *
 * @a: it is a parameter
 *
 * Return: int
 */
int print_last_digit(int a)
{
	int d;

	if (a < 0)
	{
		a = -a;
	}
	d = a % 10;
	if (d < 0)
	{
		d = -d;
	}
	_putchar(d + '0');

	return (d);
}
