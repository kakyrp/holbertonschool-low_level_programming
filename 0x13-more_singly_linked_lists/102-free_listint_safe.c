#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: pointer of linked list.
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = *h, *temp2;
	unsigned int count = 0;

	if (temp == 0 || h == 0)
	{
		return (0);
	}
	temp = *h;
	while (temp != 0)
	{
		temp2 = temp;
		temp = temp->next;
		count++;

		free(temp2);

		if (temp2 <= temp)
		{
			break;
		}
	}
	*h = 0;
	return (count);
}
