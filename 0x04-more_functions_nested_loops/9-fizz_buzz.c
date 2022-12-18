#include <stdio.h>

/**
 * main - prints numbers and replace multiples of 3 and 5
 * with Fizz and Buzz respectively.
 *
 * Return: Always 0 on success
 */
int main(void)
{
	/* declare num */
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 15) == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else
		{
			printf("%d", num);
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
