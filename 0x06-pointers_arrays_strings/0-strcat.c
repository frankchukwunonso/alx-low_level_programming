#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: pointer parameter
 * @src: pointer to a char
 *
 * Return: pointer to a char
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;

	while (dest[dest_len])
	{
		dest_len++;
	}

	while (*src)
	{
		dest[dest_len] = *src;
		src++;
		dest_len++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
