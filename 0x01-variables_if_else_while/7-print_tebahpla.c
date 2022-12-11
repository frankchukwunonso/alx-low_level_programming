#include <stdio.h>
/**
 * main - prints alphabets in reverse
 * Return: success
 */
int main(void)
{	/*declare ch*/
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	/*print new line*/
	putchar("\n");

	return (0);
}
