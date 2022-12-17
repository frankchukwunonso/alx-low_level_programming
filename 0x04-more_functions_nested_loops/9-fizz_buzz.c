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
		if ((num % 3) == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", num);
			printf(" ");
		}
	}

	return (0);
}
