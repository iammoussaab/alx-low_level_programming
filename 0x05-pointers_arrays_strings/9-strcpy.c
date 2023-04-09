#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int A = 0;

	while ('\0' != *(src + l))
	{
		l++;
	}
	for ( ; A < l ; A++)
	{
		dest[A] = src[A];
	}
	dest[l] = '\0';
	return (dest);
}
