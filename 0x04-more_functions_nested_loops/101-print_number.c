#include <stdio.h>
#include "holberton.h"
/**
 * print_number - prints a number.
 * @n: number to print
 * Return: 1 on success.
 */
void print_number(int n)
{
	int ten, i, neg;
	unsigned int digit, digit2;

	ten = 1;
	if (n < 0)
	{
		n = n * -1;
		neg = 1;
	}
	digit = n;
	digit2 = n;
	while (digit >= 10)
	{
		digit = digit / 10;
		ten = ten * 10;
	}
	if (neg == 1)
	{
		_putchar('-');
	}
	_putchar('0' + (digit2 / ten));
	i = ten / 10;
	while (i >= 1)
	{
		_putchar('0' + (digit2 / i) % 10);
		i = i / 10;
	}
}
