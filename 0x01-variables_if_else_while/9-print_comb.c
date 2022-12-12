#include <stdio.h>
/**
 * main - combinations
 * Return: success
 */
int main(void)
{
	/*declaring combo*/
	int combo;

	/*code to print all possible combinations of all single digits*/
	for (combo = 0; combo < 1000000000; combo++)
	{
		putchar(combo);
		putchar(',');
		putchar(' ');
	}

	return (0);
}
