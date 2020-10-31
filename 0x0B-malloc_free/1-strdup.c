#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: the string char used.
 * Return: the copied string or NULL if any error.
 */
char *_strdup(char *str)
{
	int i = 0;
	char *cp_str;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	cp_str = malloc(sizeof(char) * (i + 1));
	if (cp_str == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			cp_str[i] = str[i];
			i++;
		}
		return (cp_str);
	}
}
