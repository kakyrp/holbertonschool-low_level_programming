#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * number - this function will check if the number
 * is positive or not, using isdigit.
 * @s: The string to evaluate.
 * Return: if no number is passed it returns 0;
 * if is not a digit it will return 1.
 */
int number(char *s)
{
	int i, a, b;

	i = 0, a = 0, b = 1;
	if (*s == '-')
	{
		i++;
	}
	for (i = 0; *(s + i) != 0; i++)
	{
		a = isdigit(*(s + i));
		if (a == 0)
		{
			b = 0;
			break;
		}
	}
	return (b);
}
/**
 * main - is the entry function
 * @argc: number of parameters for main.
 * @argv: pointer of array of pointers with the string for main
 * Return: is always 0.
 */
int main(int argc, char **argv)
{
	int i, l, m;

	l = 0, m = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (number(argv[i]))
			{
				l += atoi(argv[i]);
			}
			else
			{
				m = 1;
			}
		}
	}
	if (m == 0)
	{
		printf("%i\n", l);
	}
	else
	{
		printf("%s\n", "Error");
	}
	return (m);
}
