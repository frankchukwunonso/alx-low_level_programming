#include "main.h"

/**
 * more_numbers - prints 0 - 14, except 2 and 4
 */
void more_numbers(void)
{
	int d, num;

	for (d = 0; d <= 10; d++)
	{
		for (num = 0; num <= 14 ; num++)
		{
			if (!(num == 2 || num == 4))
			{
				if ((num / 10) > 0)
				{
					_putchar((num / 10) + 48);
				}
				_putchar((num % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
