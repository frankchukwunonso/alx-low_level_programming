#include <studio.h>
/**
 * main - 2 2-digit numbers
 * Return: success
 */
int main(void)
{
	int ten1;
	int unit1;
	int ten2;
	int unit2;

	for (ten1 = '0'; ten1 <= '9'; ten1++)
	{
		for (unit1 = '0'; unit1 <= '9'; unit1++)
		{
			for ten2 = '0'; ten2 <= '9', ten2++)
			{
				for (unit2 = '0'; unit2 <= '9'; unit2++)
				{
					if ((ten1 < unit1) && (ten2 < unit2))
					{
						putchar(ten1);
						putchar(unit1);
						putchar(' ');
						putchar(ten2);
						putchar(unit2);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
