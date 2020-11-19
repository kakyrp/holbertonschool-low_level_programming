#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 * @s:memory area
 * @c: constant byte b.
 * Return: 1 on success.
 */
char *_strchr(char *s, char c)
{
	int l, i;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	for (i = 0; i <= l; i++, s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
