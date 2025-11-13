#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *  print_all - check the code
 * @format : const.
 */



void print_all(const char * const format, ...)
{
va_list ab;
const char *p = format;
char *pe = "";
int c;
int i;
double f;
char *s_val;
va_start(ab, format);
while (p && *p)
{
switch (*p) {
case 'c':
c = va_arg(ab, int);
printf("%s%c", pe, (char)c);
pe = ", ";
break;
case 'i':
i = va_arg(ab, int);
printf("%s%d", pe, i);
pe = ", ";
break;
case 'f':
f = va_arg(ab, double);
printf("%s%f", pe, f);
pe = ", ";
break;
case 's':
s_val = va_arg(ab, char *);
if (!s_val)
printf("(nil)"), s_val;
printf("%s%s", pe, s_val);
pe = ", ";
break;
default:
break;
}

p++;
}

printf("\n");
va_end(ab);
}
