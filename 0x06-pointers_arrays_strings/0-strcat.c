#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: a pointer parameter
 * @src: a pointer parameter
 *
 * Return: returns a pointer to a character
 */
char *_strcat(char *dest, char *src)
{
	int len, dest_len, src_len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	dest_len = len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	src_len = len;

	char *cat[dest_len + src_len - 1];

	for (i = 0; i <= dest_len; i++)
	{
		cat[i] = dest[i];
	}

	for (i = 0; i <= src_len; i++)
	{
		cat[dest_len + i] = src[i];
	}

	*dest = *cat;

	return (*dest);
