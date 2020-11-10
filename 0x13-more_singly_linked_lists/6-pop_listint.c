#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to head of linked list.
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *tempo;
	int n;

	if (head == 0 || temp == 0)
	{
		return (0);
	}
	tempo = temp->next;
	n = temp->n;
	free(temp);
	*head = tempo;

	return (n);
}
