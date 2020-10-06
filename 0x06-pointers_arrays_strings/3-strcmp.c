#include "holberton.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: The first char string to compare.
 * @s2: The second char string to compare.
 * Return: If two strings are same then _strcmp returns 0, otherwise,
 * it returns a non-zero value.
 */
int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
