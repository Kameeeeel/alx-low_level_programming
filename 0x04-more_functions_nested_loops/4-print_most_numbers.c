#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 2 || n != 4)
		{
			_putchar(n + 48);
		}
	}
	_putchar('\n');
}
