#include "holberton.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: The given number
 * Return: -1 to indicate an error if n is lower than 0
 * otherwise return is always: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
