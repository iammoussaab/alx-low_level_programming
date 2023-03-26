#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b, a, c;

	b = 48;
	a = 48;
	c = 48;

	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			c = 48;
			while (c < 58)
			{
				if (a != b && a != c && b != c && a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (b == 56 && a == 55 && c == 57)
					{
						break;
					}
					putchar (',');
					putchar (' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar ('\n');
	return (0);
}
