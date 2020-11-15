#include "holberton.h"

/**
 * binary - prints binary representation of number with & andShift right
 * operators, but uses recursion to reverse the result.
 * @n: decimal number.
 * @check: checks for special case number 0.
 * Return: No return.
 */
void binary(unsigned long int n, int check)
{
	if (check == 1)
	{
		_putchar('0');
		return;
	}
	if (n == 0)
	{
		return;
	}
	binary(n >> 1, check);
	if ((n & 1) == 0)
	{
		_putchar('0');
	}
	if ((n & 1) == 1)
	{
		_putchar('1');
	}
}

/**
 * print_binary - prints the binary representation of a number
 * @n: base 10 number.
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		binary(n, 1);
	}
	else
	{
		binary(n, 0);
	}
}
