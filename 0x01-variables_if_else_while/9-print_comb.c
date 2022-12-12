#include <stdio.h>
/**
 * main - combinations
 * Return: success
 */
int main(void)
{
	/*declaring combo*/
	int combo = 0;

	/*code to print all possible combinations of all single digits*/
	while (combo < 9; combo++)
	{
		putchar(combo);
		putchar(',');
		putchar(' ');
	}
	/*print 9*/
	putchar(9);

	return (0);
}
