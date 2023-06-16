#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - entry point
 * Description: this a C prgram that uses If statement
 * Return: always 0 (Success)
*/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (num > 0)
	{
		printf("%d is positive\n", n);
	} else if (num == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative", n);
	}
	return (0);
}
