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
			if (tens != units && tens < units)
/**
 * The first conjunct is to prevent a 2-digit number
 * with same digits from occuring while the second
 * conjunct is to restrict the 2-digit-combination to
 * their first occurence only.
 */
			{
				putchar(tens);
						/* print the 2-digit combinations*/
				putchar(units);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');/* print new line */

	return (0);
}
