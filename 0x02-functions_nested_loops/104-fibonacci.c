#include <stdio.h>

/**
 * main - firt 98 fibonacci numbers , starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	long int f2 = 1;
	long int f1 = 2;
	long int f, c;
	int n;

	printf("%ld, ", f2);
	printf("%ld, ", f1);

	for (n = 0; n < 96; n++)
	{
		f = f2 + f1;
		printf("%ld", f);
		if (n < 95)
		{
			printf(", ");
		}
		c = f1;
		f1 = f;
		f2 = c;
	}
	printf("\n");

	return (0);
}
