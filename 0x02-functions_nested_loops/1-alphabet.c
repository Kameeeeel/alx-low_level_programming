#include "main.h"

/**
 * print_alphabet: the start function and prototype
 *
 * Description: A C Program that uses _putchar function
 *
 * Return: must be always 0 (Success)
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
