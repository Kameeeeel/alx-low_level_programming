#include "main.h"

/**
 *
 * Description: A C Program that utilizes the _putchar function to print alphabet
 *
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
