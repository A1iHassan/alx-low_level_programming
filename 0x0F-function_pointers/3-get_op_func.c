#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - selects the suitable function
 * @s: operator
 * Return: a value of type int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] == *s && strlen(s) == 1)
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error 3\n");
	exit(99);
}
