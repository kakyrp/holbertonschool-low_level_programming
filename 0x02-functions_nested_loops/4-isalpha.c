#include "holberton.h"
/**
* _isalpha - returns 1 is if a lower or upper alphabetical
* character or 0 if otherwise
* @c: The character to evaluate
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
