#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s:string
 * @accept: byte to search
 * Return: 1 on success.
 */
char *_strpbrk(char *s, char *accept)
{
	int l, l2, i, j;

	l = 0, l2 = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	while (accept[l2] != '\0')
	{
		l2++;
	}
	for (i = 0; i < l; i++, s++)
	{
		for (j = 0; j < l2; j++)
		{
			if (*s == *(accept + j))
			{
				return (s);
			}
		}
	}
	return (0);
}
