#include <stdio.h>


/**
 * main - entry point
 *
 * Description: A C program that uses putchar function
 *
 * Return: always 0 (Success)
*/


int main(void)

{
	char l = 'a';

	while (l <= 'z')
	{
		putchar('%c');
		l++;
	}
	return (0);
}
