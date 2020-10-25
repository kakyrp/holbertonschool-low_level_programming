#include <stdio.h>
#include <stdlib.h>
/**
 * main - is the entry function
 * @argc: number of parameters for main.
 * @argv: pointer of array of pointers with the string for main
 * Return: is always 0.
 */
int main(int argc, char **argv)
{
	int i, mul = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		mul = 1;
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", i);
	}
	return (mul);
}
