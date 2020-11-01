#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include "variadic_functions.h"

void print_all(const char *const format, ...)
{
	int i = 0;
	char letter;
	int number;
	double decimals;
	char *stringArray;
	bool isValidFormat = true;
	va_list infiniteList;

	va_start(infiniteList, format);
	while ((format[i]))
	{
		switch (format[i])
		{
		case 'c':
			letter = va_arg(infiniteList, int);
			printf("%c", letter);
			break;

		case 'i':
			number = va_arg(infiniteList, int);
			printf("%d", number);
			break;

		case 'f':
			decimals = va_arg(infiniteList, double);
			printf("%f", decimals);
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
		{
			printf(", ");
		}
		i++;
		isValidFormat = true;
	}
	va_end(infiniteList);
	printf("\n");
}
