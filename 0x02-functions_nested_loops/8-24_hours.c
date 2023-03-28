#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int H, M;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			putchar((H / 10) + '0');
			putchar((H % 10) + '0');
			putchar(':');
			putchar((M / 10) + '0');
			putchar((M % 10) + '0');
			putchar('\n');
		}
	}
}
