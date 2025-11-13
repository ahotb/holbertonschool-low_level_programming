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
char *separator = ", ";
int printed_any = 0;
char c; 
int i; 
double f; 
char *s_val;

  va_start(ab, format);
while (*p)
{
     
if (printed_any == 1)
{
 printf("%s", separator);
}
printed_any++;
switch (*p) {
    case 'c':   
    c = va_arg(ab, int);
   printf("%c", c);
   break;
}

switch(*p){
    case 'i':
    i = va_arg(ab, int);
   printf("%d", i);
   break;
}
switch(*p){
    case 'f':
   f = va_arg(ab, double);
   printf("%f", f);
   break;
}
switch(*p){
    case 's':
   s_val = va_arg(ab, char *);
   printf("%s", s_val); 
    if (s_val == NULL)
{
    printf("(nil)");
}
break;
}

p++;

}

printf("\n");
va_end(ab);
}
