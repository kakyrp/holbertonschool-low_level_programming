#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to head of DLL
 * Return: Sum of data or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
