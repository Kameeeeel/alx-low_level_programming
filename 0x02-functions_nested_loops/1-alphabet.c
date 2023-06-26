#include "main.h"

/**
 *print_alphabet: a function that uses for loop
 *
 *Description: A C Program that utilizes the
 *_putchar function to print alphabet
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
