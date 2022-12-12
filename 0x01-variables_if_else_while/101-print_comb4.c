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
				if (((units != tens) && (tens != cents)) ||
					       ((cents > tens) && (tens > units)))
				{/* conditions for digits combo */
					putchar(cents);
					putchar(tens);
					putchar(units);
					if (cent == '7' && tens == '8' && units == '9')
					{/* stop punctuation at 789 */
						break;
					}
					putchar(',')
				}
			}
		}
	}
	putchar(',');/* new line */

	return (0);
}
