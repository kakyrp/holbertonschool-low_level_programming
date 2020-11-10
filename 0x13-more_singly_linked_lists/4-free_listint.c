#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to head of linked list.
 * Return: No return.
 */
void free_listint(listint_t *head)
{
	if (head == 0)
	{
		return;
	}
	free_listint(head->next);
	free(head);
}
