#include "main.h"

/**
 * _puts_recursion - prints a string, followed by new line
 * @s: a parameter
 */
void _puts_recursion(char *s)
{
	if (*s != 0)
	{
	_putchar(*s);
	_puts_recursion(s = s + 1);
	}
	if (*s == 0)
	{
		_putchar('\n');
	}
}
