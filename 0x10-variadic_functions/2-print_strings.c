#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: the char array to use.
 * @n: numbers given.
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mylist;
	unsigned int i = 0;
	char *str;

	va_start(mylist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(mylist, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(mylist);
}
