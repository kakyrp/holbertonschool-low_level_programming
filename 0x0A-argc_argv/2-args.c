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
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
