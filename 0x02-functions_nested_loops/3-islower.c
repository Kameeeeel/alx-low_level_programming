#include "main.h"

/**
 * _islower - A function to check for lower case letters
 *		if true returns one
 *		if false returns zero
 * @c: c is a charcter that refers to letter
 *
 * Return: is 1 if lower case or zero if otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
