#include "holberton.h"
/**
 * _strlen - the lenght of the string.
 * @s: The char array to count.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int count = 0;
int i = 0;
while (s[i] != '\0')
{
i++;
count++;
}
return (count);
}
