#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the number from n to 98.
 * @n: The number requested.
 * Return: Nothing.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}