#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Prints
 * @argc: The numbers
 * @argv: Array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) != NULL)
		printf("%d\n", get_op_func(op)(num1, num2));
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
