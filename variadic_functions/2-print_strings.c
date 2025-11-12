#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings- check the code
 * @n : const.
 * @separator : n oen
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ba;
unsigned int i;
char *str;
if (n == 0)
{
printf("\n");
return;
}
va_start(ba, n);
for (i = 0; i < n; i++)
{
str = va_arg(ba, char *);
if (i > 0 && separator != NULL)
{
printf("%s", separator);
}

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
}
printf("\n");
va_end(ba);
}
