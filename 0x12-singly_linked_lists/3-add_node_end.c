#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

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
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to head of the linked list.
 * @str: string to add to the new node.
 * Return: The address of the new element of NULL if it fails.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	char *tmp;
	list_t *tempo;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == 0)
	{
		return (0);
	}
	tempo = *head;
	if (str == 0)
	{
		new_node->str = 0;
		new_node->len = 0;
	}
	else
	{
		tmp = _strdup(str);
		if (tmp == 0)
		{
			free(new_node);
			return (0);
		}
		new_node->str = tmp;
		new_node->len = _strlen(tmp);
	}
	new_node->next = 0;

	if (tempo == 00)
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
