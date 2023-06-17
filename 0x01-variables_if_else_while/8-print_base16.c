#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program that uses putchar function
 *
 * Return: must e 0 (Success)
*/

int main(void)
{
	char n = '0', ch = 'a';

	while (n <= 9)
	{
		putchar(n);
		n++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
