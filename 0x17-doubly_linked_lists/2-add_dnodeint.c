#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - returns the number of elements in a linked dlistint_t list.
 * @head: pointer to head of DLL
 * @n: numberic value wanted in new node
 * Return: Address to the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;

	new_node->prev = NULL;
	new_node->next = *head;
	if (*head)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
