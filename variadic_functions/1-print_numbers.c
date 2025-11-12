#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - check the code
 * @n : const.
 * @separator : n oen
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ba;
unsigned int i;
int num;
if (n == 0)
{
printf("\n");
return;
}
va_start(ba, n);
for (i = 0; i < n; i++)
{
if (i > 0 && separator != NULL)
{
printf("%s", separator);
}
num = va_arg(ba, int);
printf("%d",num);
}
printf("\n");
va_end(ba);
}
