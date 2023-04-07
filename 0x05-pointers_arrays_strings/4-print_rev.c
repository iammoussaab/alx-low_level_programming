#include "main.h"
#include <stdio.h>

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int AB = 0;
	int rev;

	while (*s != '\0')
	{
		AB++;
		s++;
	}
	s--;
	for (rev = AB; rev > 0; rev--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
