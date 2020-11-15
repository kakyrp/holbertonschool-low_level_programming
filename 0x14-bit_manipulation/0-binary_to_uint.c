#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars.
 * Return: Converted number or 0 if there is on or more chars in the string b
 * that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, one, i;
	int l = 0;

	if (b == 0)
	{
		return (0);
	}

	while (b[l] != 0)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}
		l++;
	}

	l = l - 1;

	for (i = 0; l >= 0; i++, l--)
	{
		if (b[l] == '0')
		{
			one = 0;
		}
		else if (b[l] == '1')
		{
			one = 1;
		}
		one = one << i;
		result = result | one;
	}
	return (result);
}
