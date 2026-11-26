#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Evaluate an arithmetic operation from the command line
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((op == op_div || op == op_mod) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(a, b));

	return (0);
}
