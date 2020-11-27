#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: The number to print.
 * Return: On success 1. On error -1.
 */
void print_number(int n)
{
	int a, i, b;
	unsigned int digit, digit2;

	a = 1;
	if (n < 0)
	{
		n = n * -1;
		b = 1;
	}
	digit = n;
	digit2 = n;
	while (digit >= 10)
	{
		digit = digit / 10;
		a = a * 10;
	}
	if (b == 1)
	{
		_putchar('-');
	}
	_putchar('0' + (digit2 / a));
	i = a / 10;
	while (i >= 1)
	{
		_putchar('0' + (digit2 / i) % 10);
		i = i / 10;
	}
}
