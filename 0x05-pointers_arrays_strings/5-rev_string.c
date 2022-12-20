#include "main.h"

/**
 * rev_string - reverses string
 * @s: it is a string
 */
void rev_string(char *s)
{
	int index = 0;
	int len = 0;

	while (s[index] != '\0')
	{
		index++;
		len++;
	}
	char s1[len];

	len--;
	while (len <= 0)
	{
		s1[len] = s[len];
	}
	s = s1;
}
