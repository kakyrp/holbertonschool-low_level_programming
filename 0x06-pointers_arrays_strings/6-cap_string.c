#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @s: The char array.
 * Return: s.
 */
char *cap_string(char *s)
{
	int i, n;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == 32)
		{
			for (n = 97; n <= 122; n++)
			{
				if (s[i + 1] == n)
				s[i + 1] = n - 32;
			}
		}
		if (i == 0)
		{
			for (n = 97; n <= 122; n++)
			{
				if (s[i] == n)
					s[i] = n - 32;
			}
		}
	}
	return (s);
}
