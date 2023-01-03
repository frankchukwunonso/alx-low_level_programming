#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: a parameter
 * @c: a parameter
 *
 * Return: a pointer to first char c or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (&c);
		}
		i++;
	}

	return NULL;
}
