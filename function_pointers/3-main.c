#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for calculator program
 * @argc: Number of arguments
 * @argv: Argument vector
 *
 * Return: 0 on success, or error codes (98, 99, 100)
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	int (*operation)(int, int) = get_op_func(argv[2]);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' && b == 0) || (argv[2][0] == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = operation(a, b);

	printf("%d\n", result);

	return (0);
}
