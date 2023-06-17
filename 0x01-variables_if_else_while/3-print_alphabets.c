#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program that uses both for loop and putchar
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar('%c');
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar('%c');
	}
	putchar('\n');
	return (0);
}
