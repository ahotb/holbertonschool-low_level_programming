#include <stdio.h>
#include "CALC_H"
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func - prints an integer
 * @s: the integer to print
 *
 * Return: Nothing.
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
while (ops[i].op != NULL)
{
if (strcmp(ops[i].op, s) == 0)
{
    return ops[i].f;
}
i++;
}
return (NULL);
}
