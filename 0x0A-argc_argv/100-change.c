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
	int k, l, coins, cents, m;
	int c[5] = {25, 10, 5, 2, 1};

	k = 0, l = 1, coins = 0;
	if (argc == 0)
	{
		l++;
	}
	if (argc == 2)
	{
		if (number(argv[1]))
		{
			l = 0, cents = atoi(argv[1]);
			if (cents >= 0)
			{
				while (cents != 0)
				{
					m = cents / c[k];
					if (m == 0)
					{
						k++;
					}
					else
					{
						coins += m;
						cents -= (m * c[k]);
					}
				}
			}
		}
	}
	if (l == 0)
	{
		printf("%i\n", coins);
	}
	else
	{
		printf("%s\n", "Error");
	}
	return (l);
}
