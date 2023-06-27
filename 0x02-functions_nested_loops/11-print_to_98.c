#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int c;

	for (c = n; c >= 98; c--)
	{
	_putchar(c + '0');
	_putchar(',');
	_putchar(' ');
	}
	_putchar('\n');

	for (c = n; c <= 98; c++)
	{
		_putchar(c + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
