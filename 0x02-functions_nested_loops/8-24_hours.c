#include "main.h"

/*
 * jack_bauer - print every minutesof the day
 */
void jack_bauer(void)
{
	int mins1;
	int hr1;

	for (hr1 = 0; hr1 <= 23; hr1++)
	{
		for (mins1 = 0; mins1 <= 59; mins1++)
		{
			_putchar((hr1 / 10) + '0');
			_putchar((hr1 % 10) + '0');
			_putchar(':');
			_putchar((mins1 / 10) + '0');
			_putchar((mins1 % 10) + '0');
			_putchar('\n');
		}
	}
}
