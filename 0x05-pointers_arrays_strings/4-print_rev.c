#include "main.h"

/**
 * print_rev - prints strings in reverse
 * @s: it is a string
 *
 */
void print_rev(char *s)
{
	int index = 0;
	int len = 0;

	while (s[index] != '\0') /* to determine string length */
	{
		len++;
		index++;
	}
	while (len >= 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
