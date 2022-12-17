#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: it is a parameter
 *
 * Return: returns 1 or 0
 */
int _isdigit(int c)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		if (c == b)
		{
			return (1);
		}
	}
	return (0);
}
