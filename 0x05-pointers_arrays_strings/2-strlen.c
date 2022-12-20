#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: it is a pointer parameter
 *
 * Return: returns the length of passed string
 */
int _strlen(char *s)
{
	int index = 0;
	int len = 0;

	while (s[index] != '\0')
	{
		index++;
		len++;
	}

	return (len);
}
