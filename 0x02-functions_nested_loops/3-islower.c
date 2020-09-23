#include "holberton.h"
/**
* _islower - this return 1 if is a lowercase
* or 0 if is an uppercase
* @c: The character to evaluate
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
