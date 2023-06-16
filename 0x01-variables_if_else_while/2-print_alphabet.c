#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program that uses putchar function
 *
 * Return always 0 (Success)
*/

int main(void)
{
	putchar l = 'a';
	while (l <= 'z')
	{
		printf("%d", l);
		l++;
	}
	return (0);
}
