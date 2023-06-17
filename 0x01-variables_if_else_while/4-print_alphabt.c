#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program that uses putchar function
 *
 * Return: always is 0 (Success)
*/

int main(void)
{
	char ch;

	ch = 'a';

	for (; ch <= 'z' && ch != 'e' && ch != 'q'; )
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
