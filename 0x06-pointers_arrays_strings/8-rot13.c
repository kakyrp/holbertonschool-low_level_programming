#include "holberton.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @s: The char array.
 * Return: s.
 */
char *rot13(char *s)
{
	int j, k;
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; s[j] != 0; j++)
	{
		for (k = 0; abc[k] != 0; k++)
		{
			if (s[j] == abc[k])
			{
				s[j] = rot13[k];
				break;
			}
		}
	}
	return (s);
}
