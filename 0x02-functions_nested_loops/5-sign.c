#include "main.h"

/**
 * print_sign : function that given the sign of number.
 *
 * @n : function parameter n The number to check the sign of.
 *
 * Return : -1 if n < 0 print(+), 0 if n =0 print(0), 1 if n > 0 and print(-1).
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
