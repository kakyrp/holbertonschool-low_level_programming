#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print numbers with space
 * Description: prints numbers
 * and the prints is 0-9
 * Return: 0
 *
 */
int main(void)
{
	int n = 48;
	int m = 48;

	while (n < 58)
	{
		while (m < 58)
		{
			putchar(n);
			putchar(m);
			if ((n != 57) || (m != 57))
			{
				putchar(44);
				putchar(32);
			}
			m++;
		}
		m = 48;
		n++;
	}
	putchar('\n');
	return (0);
}
