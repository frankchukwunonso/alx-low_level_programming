#include "main.h"

/**
 * rev_string - reverses string
 * @s: it is a string
 */
void rev_string(char *s)
{
	int i = 0;
	int r, l;
	char d;

	while (s[i] != '\0')
	{
		i++;
	}

	r = i;
	i = i - 1;
	for (l = 0; l < r; l++)
	{
		q = s[i];
		s[l] = q;
		i--;
	}
}
