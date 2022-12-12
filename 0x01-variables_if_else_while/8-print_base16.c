#include <stdio.h>
/**
 * main - prints hexadecimal numbers in lowercase
 * Return: success
 */
int main(void)
{
	/*declare hex*/
	int hx;

	for (hx = 48; hx < 58 ; hx++)
	{
		putchar(hx);
	}

	for (hx = 'a'; hx <= 'f' ; hx++)
	{
		putchar(hx);
	}

	/*print new line after the printed hexadecimals*/
	putchar('\n');


	return (0);
}
