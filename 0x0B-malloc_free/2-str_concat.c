#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: the first string to concatenate.
 * @s2: the second string to concatenate.
 * Return: the concatenated string is success
 * otherwise returns NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *con_str;
	int index = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		i++;
		index++;
	}

	while (s2[i] != '\0')
	{
		i++;
		index++;
	}

	con_str = malloc(sizeof(char) * (i));

	if (con_str == NULL)
	{
		return (NULL);
	}

	i = 0;
	index = 0;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			con_str[index] = s1[i];
			i++;
			index++;
		}
	}

	i = 0;

	if (s2 != NULL)
	{
		while (s2[i] != '\0')
		{
			con_str[index] = s2[i];
			i++;
			index++;
		}
	}

	con_str[index] = '\0';
	return (con_str);
}
