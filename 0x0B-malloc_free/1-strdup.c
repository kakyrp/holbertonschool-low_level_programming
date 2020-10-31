#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars.
 * @c: the char used to create an array.
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
    int i = 0;
    char *cp_str;

    while (str[i] != '\0')
    {
        i++;
    }
    cp_str = malloc(sizeof(char) * (i + 1));
    if (cp_str == NULL)
	{
		return (NULL);
	}
    else
    {
        i = 0;
        while (str[i] != '\0')
        {
            cp_str[i] = str[i];
            i++;
        }
        return (cp_str);
    }
}