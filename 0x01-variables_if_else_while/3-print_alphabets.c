#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char w;

	for (w = 'a'; w <= 'z'; w++)
		putchar (w);
	for (w = 'A'; w <= 'Z'; w++)
		putchar (w);
	return (0);
}
