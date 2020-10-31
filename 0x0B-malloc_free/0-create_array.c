#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars.
 * @c: the char used to create an array.
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		return (str);
	}
}
