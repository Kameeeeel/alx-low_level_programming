#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C Program that uses putchar function
 *
 * Return: must be 0 (Success)
*/

int main(void)
{
	char l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
