#include "main.h"

/**
 * _isalpha - A Function that checks if the input is alphabetic
 *
 * @c: is the input charcter
 *
 * Return: is 1 if it's alphabetic or 0 if not
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
