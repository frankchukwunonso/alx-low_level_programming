#include <stdio.h>
/**
 * print_to_98 - running to 98
 *
 * @n: it is a parameter
 *
 * Return: returns void
 */
void print_to_98(int n)
{
	int i;
	int n1 = n;

	if (n > 98)
	{
		while (n >= 98)
		{
			putchar(n);
			n--;
		}
	}
	else
	{
		while (n < 97)
		{
			putchar(n);
			n++;
		}
	}
}

