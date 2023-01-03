#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: is a pointer to char
 * @b: is a pointer to char
 * @n: is an unsigned int
 *
 * Return: returns char on success
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char **u;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (u);
}
