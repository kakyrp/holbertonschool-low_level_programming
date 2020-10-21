#include "holberton.h"

/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y.
 * @x: The first number.
 * @y: The second number.
 * Return: -1 if n is lower than 0, 1 if same as 0,
 * otherwise return is always: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
