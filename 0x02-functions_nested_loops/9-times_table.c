#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * @c: is the row variable
 *
 * @n: is the column variable
 *
 * @t: is the c times n
*/

void times_table(void)
{
	int c, n, t;

	for (c = 0; c < 10; c++)
	{
		for (n = 0; n < 10; n++)
		{
			t = c * n;

			if (n == 0)
			{
				_putchar(t + '0');
			}
			else if (t < 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(t + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
