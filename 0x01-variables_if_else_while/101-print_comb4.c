#include <stdio.h>
/**
 * main - 3- digit combo
 * Return: success
 */
int main(void)
{
	int cents;/* declare variables */
	int tens;
	int units;

	for (units = '0'; units <= '9'; units++)/* loop for 3-digit numbers */
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (cents = '0'; cents <= '9'; cents++)
			{
				if (!(((tens == units) || (tens == cents)) || (cents == units)))
				{
					putchar(cents);
					putchar(tens);
					putchar(units);
					if (cents == '7' && tens == '8' && units == '9')
					{/* stop punctuation at 789 */
						break;
					}
					putchar(',');
				}
			}
		}
	}
	putchar(',');/* new line */

	return (0);
}
