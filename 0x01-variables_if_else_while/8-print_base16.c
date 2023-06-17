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
	char n = 0, ch = 'A';

	while (n <= 9)
	{
		putchar(n);
		n++;
	}
	for (; ch <= 'F'; )
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
