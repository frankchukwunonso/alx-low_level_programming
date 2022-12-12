#include <stdio.h>
/**
 * main - 2-digits combination with no repeat or sameness
 * Return: success
 */
int main(void)
{
	int units;
	int tens;

	for (units = '0'; units <= '9'; units++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			if (tens != units && tens < units)
/**
 * The first conjunct is to prevent a 2-digit number
 * with same digits from occuring while the second
 * conjunct is to restrict the 2-digit-combination to
 * their first occurence only.
 */
			{
				putchar(units);
						/* print the 2-digit combinations*/
				putchar(tens);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');/* print new line */

	return (0);
}
