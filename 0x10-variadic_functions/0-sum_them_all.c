#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: Number to sum.
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mylist;
	unsigned int i = 0;
	int result = 0;

	if (n == 0)
	{
	return (0);
	}
	va_start(mylist, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(mylist, int);
	}
	va_end(mylist);
	return (result);
}
