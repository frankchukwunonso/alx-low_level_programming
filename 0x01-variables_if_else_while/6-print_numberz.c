#include <stdio.h>
/**
 * main - pritnts numbers with putchar
 * Return: success
 */
int main(void)
{
	/*initialise digits*/
	char digits = '0';

	/* loop to print digits*/
	for (digits = 0; digits <= 9; digits++)
	{
		putchar("%d", digits);
		putchar("\n")
	}

	return (0);
}
