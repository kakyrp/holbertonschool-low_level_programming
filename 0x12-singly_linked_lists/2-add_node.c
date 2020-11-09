#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of linked lists.
 * @str: string.
 * Return: number of elements in list_t.
*/
list_t *add_node(list_t **head, const char *str)
{
	char *temp;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == 0)
	{
		return (0);
	}
	if (str == 0)
	{
		new_node->str = 0;
		new_node->len = 0;
	}
	else
	{
		temp = _strdup(str);

		if (temp == 0)
		{
			free(new_node);
			return (0);
		}

		new_node->str = temp;
		new_node->len = _strlen(temp);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * with the copy of the string given as a parameter.
 * @str: string to copy
 * Return: pointer.
*/
char *_strdup(const char *str)
{
	int n = 0, i;
	char *s;

	if (str == NULL)
	{
		return (0);
	}
	while (*(str + n))
	{
		n++;
	}
	s = malloc(sizeof(char) * n + 1);

	if (s == 0)
	{
		return (0);
	}
	for (i = 0; i <= n; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}
/**
 * _strlen - function that gets the length of a string
 * @s: string
 * Return: Length of a array of characters.
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
