#include "holberton.h"
int is_palindrome(char *s);
int pal1(char *a, int b);
int pal2(char *a, int b);

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: String to use in this function.
 * Return: 1 if n is a prime number, otherwise return is always: 0.
 */
int is_palindrome(char *s)
{
	int k;

	k = pal1(s, 0);
	return (pal2(s, k));
}
/**
 * pal1 - obtains lenghts of char a.
 * @a: String to use in this function.
 * @b: the integer that will count the length
 * Return: 1 if n is a prime number, otherwise return is always: 0.
 */
int pal1(char *a, int b)
{
	if (*a == 0)
	{
		return (b - 1);
	}
	return (pal1(a + 1, b + 1));
}
/**
 * pal2 - obtains lenghts of char a.
 * @a: String to use in this function.
 * @b: the integer that will count the length
 * Return: 1 if n is a prime number, otherwise return is always: 0.
 */
int pal2(char *a, int b)
{
	if (*a != *(a + b))
	{
		return (0);
	}
	else if (*a == 0)
	{
		return (1);
	}
	else
	{
		return (pal2(a + 1, b - 2));
	}
}
