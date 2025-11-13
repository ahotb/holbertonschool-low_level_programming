#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *  print_all - check the code
 * @format : const.
 */
void print_all(const char * const format, ...)
{
const char *p = format;
int *s;
char *separator = ", "

va_list a;
va_start(a, format);
while (*p)
{
if (separator > 0)
s += va_arg(a, int);
printf("%c%d%f", s);
p++;
}
if (s == NULL)
printf("(nil)");
printf("\n");
va_end(a);
}
