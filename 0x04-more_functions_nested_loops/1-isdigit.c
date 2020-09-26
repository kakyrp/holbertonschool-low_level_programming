#include "holberton.h"
/**
* _isdigit - returns 1 is if a number
* and if is a character it returns 0.
* @c: The character to evaluate
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
