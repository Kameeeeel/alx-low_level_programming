#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program that uses printf function
 *
 * Return: must be 0 (Success)
*/

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		printf("%d", d);
		d++;
		printf("\n")
	}
	return (0);
}
