#include "main.h"

/**
 * _memcpy - a function that copies memoyy area
 * @dest: parameter
 * @src: a parameter
 * @n: a parameter
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
