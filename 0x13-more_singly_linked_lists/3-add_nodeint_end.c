#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of
 * a listint_t list.
 * @head: pointer to head of linked list.
 * @n: number to add to the new node.
 * Return: the address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tempo;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == 0)
	{
		return (0);
	}
	tempo = *head;

	new_node->n = n;
	new_node->next = 0;

	if (tempo == 0)
	{
		*head = new_node;
	}
	else
	{
		while (tempo->next != 0)
		{
			tempo = tempo->next;
		}
		tempo->next = new_node;
	}
	return (new_node);
}
