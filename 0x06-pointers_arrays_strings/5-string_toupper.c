#include "holberton.h"

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase.
 * @s: The array to change.
 * Return: s.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 'Z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
