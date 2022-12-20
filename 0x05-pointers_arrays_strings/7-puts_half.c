#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: it's a pointer parameter
 */
void puts_half(char *str)
{
	int i = 0;
	int n, m;

	while (str[i] != '\0')
	{
		i++;
	}
	n = i / 2;
	if (i % 2 == 1)
	{
		m = n + 2;
		while (str[m] != '\0')
		{
			_putchar(str[m]);
		}
	}
	else
	{
		m = n + 1;
		while (str[m] != '\0')
		{
			_putchar(str[m]);
		}
	}
}
