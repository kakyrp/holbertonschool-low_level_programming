#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * print_return - auxiliar function
 * @error_number: number of error.
 * @coins: the number of coins received.
 * Return: the number of errors.
 */

int print_return(int error_number, int coins)
{
	if (error_number == 0)
	{
		printf("%i\n", coins);
	}
	else
	{
		printf("%s\n", "Error");
	}
	return (error_number);
}
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
		return (0);
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
	int index, error_number, coins, cents, result;
	int c[5] = {25, 10, 5, 2, 1};

	index = 0, error_number = 1, coins = 0;
	if (argc != 2)
	{
		error_number++;
	}
	else
	{
		if (number(argv[1]))
		{
			error_number = 0, cents = atoi(argv[1]);
			if (cents >= 0)
			{
				while (cents != 0)
				{
					result = cents / c[index];
					if (result == 0)
					{
						index++;
					}
					else
					{
						coins += result;
						cents -= (result * c[index]);
					}
				}
			}
		}
		else
		{
			printf("%d\n", 0);
			return (0);
		}
	}
	return (print_return(error_number, coins));
}
