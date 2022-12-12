#include <stdio.h>
/**
 * main - combinations
 * Return: success
 */
int main(void)
{
	/*declaring combo*/
	int combo = '0';

	/*code to print all possible combinations of all single digits*/
	while (combo <= '9')
	{
		putchar(combo);
		if (combo == '9')
		{
		/*terminate loop*/
		break;
		}
		putchar(',');
		putchar(' ');
		combo++;
	}
	/*print new line*/
	putchar('\n');

	return (0);
}
