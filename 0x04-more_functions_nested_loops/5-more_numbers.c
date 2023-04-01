#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int num;
	int i;

	for (num = 48; num <= 10; num++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}
		putchar ('\n');
	}

}
