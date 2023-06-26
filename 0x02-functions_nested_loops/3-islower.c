#include "main.h"

/**
 * int_islower - A C program that checks for lower case character
 *
 * Description: using a chcker for lower cases
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
