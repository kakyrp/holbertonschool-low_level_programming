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
			printf("%s", va_arg(mylist, char *));
		}
		else
		{
			if (i < index - 1)
			{
				if (va_arg(mylist, char *) == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s%s", va_arg(mylist, char *), separator);
				}
			}
			else
			{
				printf("%s", va_arg(mylist, char *));
			}
		}
	}
	printf("\n");
	va_end(mylist);
}
