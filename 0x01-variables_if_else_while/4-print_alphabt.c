#include <stdio.h>
/**
 * main - Entry point
 * Return: success
 */
int main(void)
{
	/*initialising the lowercase alpabet*/
	char ch = 'a';

	/*loop to print lowercase letters except 'q' and 'e'*/
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
	}

	return (0)
}
