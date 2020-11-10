#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer of linked list.
 * Return: the size of the list that was free'd
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp1, *tmp2;

	tmp1 = head;
	if (tmp1 == 0)
	{
		return (0);
	}
	if (tmp1 == tmp1->next)
	{
		return (tmp1);
	}
	while (tmp1 != 0)
	{
		tmp2 = head;
		tmp1 = tmp1->next;

		while (tmp2 != tmp1 && tmp1 != 0)
		{
			if (tmp1->next == tmp1)
			{
				return (tmp1);
			}
			if (tmp1->next == tmp2)
			{
				return (tmp2);
			}
			tmp2 = tmp2->next;
		}
	}
	return (tmp1);
}
