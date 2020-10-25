#include "holberton.h"
int recursion(int index, int final);
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: The number used.
 * Return: 1 if n is a prime number, otherwise return is always: 0.
 */
int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	else if (n < 2)
	{
		return (0);
	}
	else
	{
		return (recursion(n, 2));
	}
}
/**
 * recursion - auxiliar function
 * @index: represents the number 2.
 * @final: represents the n number.
 * Return: 1 if n is a prime number, otherwise return is always: 0.
 */
int recursion(int index, int final)
{
	if (index % final == 0 && index != final)
	{
		return (0);
	}
	else if (final == index)
	{
		return (1);
	}
	else
	{
		return (recursion(final, ++index));
	}
}
