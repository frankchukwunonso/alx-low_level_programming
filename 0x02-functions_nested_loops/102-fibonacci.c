#include <stdio.h>

/**
 * main - first 50 fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int f2 = 1;
	int f1 = 2;
	int f, c;
	int n;

	for (n = 0; n < 50; n++)
	{
		f = f2 + f1;
		c = f1;
		f1 = f;
		f2 = c;
	}
	return (0);
}

