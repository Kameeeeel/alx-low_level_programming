#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
*/

void times_table(void)
{
	for (c = 0; c < 10; c++)
	{
		for (n = 0; n < 10; n++)
		{
			t = c * n
			if (n == 0)
			{
				_putchar(t);
			}
			else if (t < 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(t);
			}
			else
			{
				_putchar(' ');
				_putchar(t);
				_putchar(',');
			}
		}
	}
}
