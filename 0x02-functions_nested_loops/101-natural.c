#include <stdio.h>
/**
 * main - summed multiples of 3 or 5 to 1024(excluded)
 * Return: Always 0.
 */
int main(void)
{
	int sum_mul = 0;
	int n = 0;

	while (n < 1024)
	{
		n++;
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			sum_mul = sum_mul + n;
		}
	}
	printf("%d\n", sum_mul);

	return (0);
}
