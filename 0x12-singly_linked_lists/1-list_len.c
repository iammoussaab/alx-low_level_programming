#include "lists.h"
#include <stdlib.h>
/**
 * list_len - returns the number of elements in a linked list
 * @point: pointer to the list_t list
 *
 * Return: number of elements in point
 */
size_t list_len(const list_t *point)
{
	size_t count = 0;

	while (point)
	{
		count++;
		point = point->next;
	}
	return (count);
}
