#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked lists.
 * @head: pointer of linked list.
 * Return: Number of elements in list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp1, *tmp2;
	unsigned int count = 0;

	tmp1 = head;
	if (tmp1 == 0)
	{
		return (0);
	}
	while (tmp1 != 0)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		count++;
		printf("[%p] %d\n", (void *)tmp2, tmp2->n);

		if (tmp2 <= tmp1)
		{
			printf("-> [%p] %d\n", (void *)tmp1, tmp1->n);
			break;
		}
	}
	return (count);
}
