#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar (num);
	}
	putchar('\n');
}
