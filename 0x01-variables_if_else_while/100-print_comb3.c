#include <stdio.h>
/**
 * main - 2-digits combination with no repeat or sameness
 * Return: success
 */
int main(void)
{
	int units;
	int tens;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (units = '0'; units <= '9'; units++)
		{
			if (tens != units && tens < units)/* no repeat/same digit */
			{
				putchar(tens);
						/* print the 2-digit combinations */
				putchar(units);
				if (tens == '8' && units == '9')
				{
					break
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');/* print new line */

	return (0);
}
