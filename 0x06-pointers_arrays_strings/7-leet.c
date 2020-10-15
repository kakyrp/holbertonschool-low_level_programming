#include "holberton.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @s: The char array.
 * Return: s.
 */
char *leet(char *s)
{
    int j, k;
    char letters [] = {97, 101, 111, 116, 108};
    char numbers [] = {52, 51, 48, 55, 49};

    for (j = 0; s[j] != 0; j++)
    {
        for (k = 0; letters[k] != 0; k++)
        {
            if ((s[j] == letters[k]) || (s[j] == letters[k] - 32))
            s[j] = numbers[k];
        }
    }
    return (s);
}