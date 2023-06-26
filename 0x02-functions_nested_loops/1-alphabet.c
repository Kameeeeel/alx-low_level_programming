#include "main.h"

/**
 *print_alphabet - a C Program that utilizes the _putchar
 *		function to print the alphabet in lower cases
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
