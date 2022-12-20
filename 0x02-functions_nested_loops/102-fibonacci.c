#include <stdio.h>

/**
 * main - first 50 fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	long int f2 = 1;
	long int f1 = 2;
	long int f, c;
	int n;

	printf("%d, ", f2);
	printf("%d, ", f1);

	for (n = 0; n < 50; n++)
	{
		f = f2 + f1;
		printf("%d", f);
		if (n < 49)
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

