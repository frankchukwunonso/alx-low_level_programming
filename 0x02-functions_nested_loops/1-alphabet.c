#include "main.h"

/**
 * print_alphabet - print alphabets
 * Return: void
 */
void print_alphabet(void)
{
	/*declare ch*/
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
