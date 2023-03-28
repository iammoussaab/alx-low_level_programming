#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
		       	if (b == 0)
			{
				printf("%d", c);
			}
			else if (c < 10)
			{
				printf("  %d", c);
			}
			else if (c < 100)
			{
				printf("  %d", c);
			}
			else
			{
				printf(" %d", c);
			}
			printf("\n");
		}
	}
}
