#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - Selects the correct operation function.
 * @s: The operator as a string.
 *
 * Return: A pointer to the function that corresponds to the operator,
 *         or NULL if the operator is not recognized.
 */

int (*get_op_func(char *s))(int, int)
{
		op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL && strcmp(s, ops[i].op) != 0)
	{
		i++;
	}

	return (ops[i].f);
}
