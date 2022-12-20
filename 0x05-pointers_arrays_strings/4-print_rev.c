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
	l--; /* to omit the null char in starting the print_rev */
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
