#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the char array to use.
 * @n: numbers given.
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mylist;
	unsigned int i = 0;
	unsigned int index = 0;

	va_start(mylist, n);
	for (i = 0; i < n; i++)
	{
		index++;
	}
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(mylist, int));
		}
		else
		{
			if (i < index - 1)
			{
			printf("%d%s", va_arg(mylist, int), separator);
			}
			else
			{
				printf("%d", va_arg(mylist, int));
			}
		}
	}
	printf("\n");
	va_end(mylist);
}
