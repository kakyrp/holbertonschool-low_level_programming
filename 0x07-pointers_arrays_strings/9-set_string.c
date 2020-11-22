#include "holberton.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char.
 * @s: double pointer
 * @to: pointer.
 * Return: 1 on success.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
