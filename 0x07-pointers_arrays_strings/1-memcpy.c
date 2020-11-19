#include "holberton.h"

/**
 * _memcpy - copies memory area.
 * @dest:memory area destination
 * @src: memory area source.
 * @n: n bytes of memory area to be copy.
 * Return: 1 on success.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++, dest++, src++)
	{
		*dest = *src;
	}
	dest = dest - n;
	return (dest);
}
