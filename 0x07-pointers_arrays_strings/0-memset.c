#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s:memory area
 * @b: Constant byte b.
 * @n: first n bytes of memory area pointed by s.
 * Return: 1 on success.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++, s++)
	{
		*s = b;
	}
	s = s - n;
	return (s);
}
