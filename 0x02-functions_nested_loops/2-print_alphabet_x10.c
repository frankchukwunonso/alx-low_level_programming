#include "main.h"

/**
 *  print_alphabet_x10 - print alphabets x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	/* declare ch and i */
	char ch;
	int i;

	for (i = 0; i <= 1; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
}
