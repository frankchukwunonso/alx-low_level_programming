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

	for (cents = '0'; cents <= '9'; cents++)/* loop for 3-digit numbers */
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (units = '0'; units <= '9'; units++)
			{
				if (cent < tens < units)
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
	putchar('\n');/* new line */

	return (0);
}
