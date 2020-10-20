#include "holberton.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @s: The char array.
 * Return: s.
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		if (s[i - 1] == 32 && (s[i] >= 97 && s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
		if (s[i] == 46 && (s[i + 1] >= 97 && s[i + 1] <= 122))
		{
			s[i + 1] = s[i + 1] - 32;
		}
		if (s[i] == '\t' && (s[i + 1] >= 97 && s[i + 1] <= 122))
		{
			s[i + 1] = s[i + 1] - 32;
		}
		if (s[i] == '\n' && (s[i + 1] >= 97 && s[i + 1] <= 122))
		{
			s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
