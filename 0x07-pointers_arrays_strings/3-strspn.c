#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s:memory area
 * @accept: constant byte b.
 * Return: 1 on success.
 */
unsigned int _strspn(char *s, char *accept)
{
	int l, l2, i, j, byte;

	l = 0, l2 = 0, byte = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	while (accept[l2] != '\0')
	{
		l2++;
	}
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < l2; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				byte += 1;
				break;
			}
		}
		if (j == l2)
		{
			break;
		}
	}
	return (byte);
}
