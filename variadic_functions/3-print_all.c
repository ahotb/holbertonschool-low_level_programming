#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *  print_all - check the code
 * @format : const.
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *p = format;
int printed = 0;
char *s;
va_start(args, format);
while (*p)
{
if (*p == 'c')
{
if (printed) printf(", ");
printf("%c", (char)va_arg(args, int));
printed = 1;
}
if (*p == 'i')
{
if (printed) printf(", ");
printf("%d", va_arg(args, int));
printed = 1;
}
if (*p == 'f')
{
if (printed) printf(", ");
printf("%f", va_arg(args, double));
printed = 1;
}
if (*p == 's')
{
if (printed) printf(", ");

s = va_arg(args, char *);
if (s == NULL)
printf("(nil)");
if (s != NULL)
printf("%s", s);
printed = 1;
}
p++;
}
printf("\n");
va_end(args);
}
