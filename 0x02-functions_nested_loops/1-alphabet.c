#include "main.h"

/**
 * main - entry point
 *
 * Description: A C Program that uses _putchar function
 *
 * Return: must be always 0 (Success)
*/

void print_alphabet(void)
{
	int i;
	for (i = 65; i <= 97; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
	return (0);
}
