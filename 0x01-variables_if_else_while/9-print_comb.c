#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C Program that uses putchar function
 *
 * Return: must be 0 (Success)
*/

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	return (0);
}
