#include "holberton.h"
int square_root(int value, int index);
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: The number.
 * Return: -1 if n does not have a natural square root.
 * otherwise return is always: 0
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 0));
}

/**
 * square_root - function that will support the number.
 * @value: Variable number 1.
 * @index: variable number 2.
 * Return: the result of index.
 */

int square_root(int value, int index)
{
	if (value == 1 || value == 0)
	{
		return (value);
	}
	else if (value < 0)
	{
		return (-1);
	}
	else if ((index * index) != value)
	{
		if ((index * index) > value)
		{
			return (-1);
		}
		else
		{
			index++;
			return (square_root(value, index));
		}
	}
	else
	{
		return (index);
	}
}
