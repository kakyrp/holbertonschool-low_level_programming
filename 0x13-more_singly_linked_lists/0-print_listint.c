#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to head of singly linked lists
 * Return: number of elements in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int size = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
