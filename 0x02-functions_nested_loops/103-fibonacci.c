#include <stdio.h>

/**
 * main - fibonacci numbers up to 4000 starting with 1 an 2
 *
 * Return: Always 0.
 */
int main(void)
{
	long int f2 = 1;
	long int f1 = 2;
	long int f;

	printf("%ld, ", f2);
	printf("%ld, ", f1);

	while (f < 4000000)
	{
		f = f2 + f1;
		if ((f % 2) == 0)
		{
			printf("ld", f);
			printf(", ");
		}
			c = f1;
			f1 = f;
			f2 = c;
	}
	printf("\n");

	return (0);
}
