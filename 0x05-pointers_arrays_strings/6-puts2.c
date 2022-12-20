#include "main.h"

/**
 * puts2 - prints every other character
 * @str: it's a pointer parameter
 */
void puts2(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		*(str + a);

		if (a % 2 == 0)
		{
			_putchar((*str + a));
		}
		a++;
	}
}
