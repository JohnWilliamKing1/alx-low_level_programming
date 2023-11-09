#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - ..
 * @argc: ..
 * @argv: ..
 * Return: ..
 */
int main(int argc, char *argv[])
{
	int (*op_func)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (op_func == NULL || (op_func == op_div || op_func == op_mod) && num2 == 0)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", op_func(num1, num2));
	return (0);
}
