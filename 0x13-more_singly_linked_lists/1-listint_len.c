#include <stddef.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 * @h: pointer to head of singly linked lists
 * Return: number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int size = 0;

	while (h != 0)
	{
		h = h->next, size++;
	}
	return (size);
}
