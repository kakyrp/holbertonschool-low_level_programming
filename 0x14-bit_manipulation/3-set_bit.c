#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: decimal number.
 * @index: index to print.
 * Return: Value of the bit at the index or -1 if an error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
	{
		return (-1);
	}
	mask = 1 << index;
	*n = *n | mask;
	return (1);
}
