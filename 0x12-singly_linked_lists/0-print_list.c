#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to the head of linked lists.
 * Return: number of elements in list_t.
*/
size_t print_list(const list_t *h)
{
	unsigned int elements = 0;

	while (h != NULL)
	{
		if (h->str != 0)
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		elements++;
	}
	return (elements);
}

