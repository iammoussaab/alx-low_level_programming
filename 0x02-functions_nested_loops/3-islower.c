#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * @c is parameter to be print
 *
 * Return 1: it is a lowercase
 * Return 0: isn't a lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
