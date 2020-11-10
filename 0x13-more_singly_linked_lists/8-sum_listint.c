#include "lists.h"

/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: pointer to head of linked list.
 * Return: If the list is empty return is 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == 0)
	{
		return (0);
	}
	while (head != 0)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
