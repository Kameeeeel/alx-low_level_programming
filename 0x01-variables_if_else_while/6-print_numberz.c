#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C Program that uses putchar function
 *
 * Return: Must be 0 (Success)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
