#include "main.h"

/**
 * _strncat - concatenates strings
 * @dest: a pointer to char
 * @src: a pointer to char
 * @n: is an integer
 *
 * Return: returns a pointer to an integer
 */
char *_strcat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len])
	{
		destlen++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
