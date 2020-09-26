#include "holberton.h"
/**
* _isupper - this return 1 if letter is uppercase
* or 0 if is lowercase
* @c: The character to evaluate
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int _isupper(int c)
{
if (c > 67 && c < 91)
{
return (0);
}
else
{
return (1);
}
}
