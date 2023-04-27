#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
 size_t s = 0;

 while (h)
 {
 if (!h->str)
 printf("[0] (nil)\n");
 else
 printf("[%u] %s\n", h->len, h->str);
 h = h->next;
 s++;
 }

<<<<<<< HEAD
		count++;
		h = h->next;
	}
	return (count);
=======
 return (s);
>>>>>>> a7b1c07b04deab98af3cbabaca9122e7853a9b0a
}
