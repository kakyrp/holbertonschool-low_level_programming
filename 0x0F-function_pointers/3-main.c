#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Counts the number of parameters that go into main.
 * @argv: Pointer of array of pointers containing strings entering main.
 * Return: -1 if no elements matches. If size <= 0 -1
 * else index of first element cmp function does no return 0.
 */
int main(int argc, char **argv)
{
	int res;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}

	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
	&& argv[2][0] != '/' && argv[2][0] != '%') || strlen(argv[2]) != 1)
	{
		printf("Error\n"), exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n"), exit(100);
	}
	func = get_op_func(argv[2]);
	res = func(atoi(argv[1]), atoi(argv[3]));
	printf("%i\n", res);
	return (0);
}
