#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: it's a pointer parameter
 */
void puts_half(char *str)
{
	int i = 0;
	int n, m;
	int a;

	while (str[i] != '\0')
	{
		i++;
	}
	n = i / 2;

	if (i % 2 == 0)
	{
		n = n + 1;
		while (m = 0; m < i; m++)
		{
			if (m >= n)
			{
				_putchar(str[m]);
			}
		}
		_putchar('\n');
	}
	else
	{
		n = n + 2;
		while (m = 0; m < i; m++)
		{
			if (m >= n)
			{
				_putchar(str[m]);
			}
		}
		_putchar('\n');
	}
}
