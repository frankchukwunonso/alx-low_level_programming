#include "main.h"

/**
 * _isupper: checks for uppercase character
 *
 *@c: it is a parameter
 *
 * Returns: returns 1 or 0
 */
int _isupper(int c)
{
	int b;

	for (b = 'A'; b <= 'Z'; b++)
	{
		if (c == b)
		{
			return (1);
		}		
	}
	return (0);
}
