#include "main.h"
/**
 * _isalpha - ckeck for alphabetic character
 *
 * @c: it is a paramete
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
