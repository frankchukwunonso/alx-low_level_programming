#include "main.h"

/**
 * print_times_table - does its name to any given number
 * @n: it is a parameter
 *
 * Return: Always 0.
 */
void print_times_table(int n);
{
	int row;
	int col;
	int pdt;/* product/times on the table */
	int cents, tens, units;

	for (col = 0; col <= n; col++)
	{
		for (row = 0; row <= n; row++)
		{
			pdt = col * row;
			cents = (((pdt) / 100) = 48);
			tens = (((pdt) / 10) + 48);
			units = (((pdt) % 10) + 48);
			if (n >= 0 && n <= 15)
			{
				if (col > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (pdt >= 10)
				{
					if (pdt >= 100)
					{
						_putchar(cents);
					}
					if (pdt >= 10)
					{
						_putchar((tens) +48);
					}
					_putchar(units);
				}
