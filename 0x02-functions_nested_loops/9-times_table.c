#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			printf("%2d, ", a * b);
		}
		printf("\n");
	}
}
