#include "holberton.h"

/**
 * print_times_table - prints the n times table starting with 0 betweetn 0-15
 * @n: integer
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j, nm;

	if (n < 0 || n > 15)
	{
		return;
	}
	else if
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				nm = i * j;
				if (nm < 10)
					_putchar(nm + 48);
				else if (nm < 100)
					_putchar((nm / 10) + 48);
					_putchar((nm % 10) + 48);
				else
					_putchar((nm / 100) + 48);
					_putchar(((nm / 10) % 10) + 48);
					_putchar((nm % 10) + 48);
				if (j != n)
					_putchar(44);
					_putchar(32);
				if ((i * (j + 1)) < 10 && (j != n))
					_putchar(32);
					_putchar(32);
				else if ((i * (j + 1)) < 100 && (j != n))
					_putchar(32);
			}
			_putchar(10);
		}
	}
}
