#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees memory.
 * @head: pointer to head of the linked list.
 * Return: no return.
*/
void free_list(list_t *head)
{
	if (head == 0)
	{
		return;
	}
	free_list(head->next);
	free(head->str);
	free(head);
}
