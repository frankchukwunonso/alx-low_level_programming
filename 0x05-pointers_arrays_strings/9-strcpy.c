#include "main.h"

/**
 * _strcpy - copies string pointed to by src
 * @dest: destination poiter variable
 * @src: pointer variable
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int m;

	while (src[i] != '\0')
	{
		i++;
	}
	for (m = 0; <= i; m++)
	{
		dest[i] = src[i];
	}
	return (*dest);
}
