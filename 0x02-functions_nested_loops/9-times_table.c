#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int A, B, prod;

	for (A = 0; A <= 9; A++)
	{
		_putchar('0');

		for (B = 1; B <= 9; B++)
		{
			_putchar(',');
			_putchar(' ');

			prod = A * B;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
