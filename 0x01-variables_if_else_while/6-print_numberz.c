#include <stdio.h>
/**
 * main - pritnts numbers with putchar
 * Return: success
 */
int main(void)
{
	/*initialise digits*/
	int digits;

	/* loop to print digits*/
	for (digits = '0'; digits <= '9'; digits++)
	{
		putchar(digits);
	}
	/*print new line*/
	putchar('\n');

	return (0);
}
