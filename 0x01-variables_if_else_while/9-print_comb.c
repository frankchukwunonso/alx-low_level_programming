#include <stdio.h>
/**
 * main - combinations
 * Return: success
 */
int main(void)
{
	/*declaring combo*/
	int combo;

	for (combo = 0; combo < 1000000000; combo++)
	{
		putchar(combo);
		putchar(', ');
	}

	return (0);
}
