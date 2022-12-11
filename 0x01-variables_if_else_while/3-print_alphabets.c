#include <stdio.h>
/**
 * main - Entry point
 * Return: Success
 */
int main(void)
{
	/*initialise the CAPITAL and lowercase variatbles*/
	char ch = 'a';
	char CH = 'A';

	/*loop to print out lowercase alphabets*/
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}

	/*loop to print out UPPERCASE alphabets*/
	for (CH = 'A'; ch <= 'Z'; CH++)
	{
	putchar(CH);
	}

	/*print new line*/
	putchar('\n');

	return (0);
}
