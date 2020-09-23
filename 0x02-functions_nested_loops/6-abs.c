#include "holberton.h"
/**
* _abs - This function returns the absolute value of an integer
* @k: The character to evaluate
* Return: prints 0.
* On error, -1 is returned, and errno is set appropriately.
*/
int _abs(int k)
{
if (k == 0)
{
return (0);
}
else if (k > 0)
{
return (k);
}
else
{
return (k * -1);
}
}
