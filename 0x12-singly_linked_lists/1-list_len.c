#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked
 * list_t list.
 * @h: pointer to the head of linked lists.
 * Return: number of elements in list_t.
*/
size_t list_len(const list_t *h)
{
	unsigned int elements = 0;

	while (h != 0)
	{
		h = h->next, elements++;
	}
	return (elements);
}
