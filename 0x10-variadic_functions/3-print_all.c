#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: the format specifier.
 */

void print_all(const char *const format, ...)
{
	int i = 0;
	char *stringArray;
	bool isValidFormat = true;
	va_list infiniteList;

	va_start(infiniteList, format);
	while (format != NULL && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(infiniteList, int));
			break;
		case 'i':
			printf("%d", va_arg(infiniteList, int));
			break;
		case 'f':
			printf("%f", va_arg(infiniteList, double));
			break;
		case 's':
			stringArray = va_arg(infiniteList, char *);
			if (stringArray == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", stringArray);
			break;
		default:
			isValidFormat = false;
			break;
		}
		if (format[i + 1] != '\0' && isValidFormat)
			printf(", ");
		i++;
		isValidFormat = true;
	}
	va_end(infiniteList);
	printf("\n");
}
