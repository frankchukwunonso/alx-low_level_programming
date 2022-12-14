#include <stdio.h>
/**
 * print_to_98 - running to 98
 *
 * @n: it is a parameter
 *
 * Return: returns void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d", n);
			n--;
			printf(", ");
		}
		printf("98");
		putchar('\n');
	}
	else if (n < 98)
	{
		while (n <= 97)
		{
			printf("%d", n);
			n++;
			printf(", ");
		}
		printf("98");
		putchar('\n');
	}
	else
	{
		printf("98\n");
	}
}

