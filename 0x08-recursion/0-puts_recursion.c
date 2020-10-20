#include "holberton.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: The string to be printed.
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
