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
int first = 1;
int c; 
int i; 
double f; 
char *s_val;

  va_start(ab, format);
while (*p != '\0')
{
            
         if (!first)
            printf(", ");
    switch (*p) {
            case 'c': {
                 c = va_arg(ab, int); 
                
                printf("%c", (char)c);
                first = 0;
                break;
            }
            case 'i': {
                 i = va_arg(ab, int);
                
                printf("%d", i);
                first = 0;
                break;
            }
            case 'f': {
                f = va_arg(ab, double);
                       
                printf("%f", f);
                first = 0;
                break;
            }
            case 's': {
                s_val = va_arg(ab, char *);
                        
                if (s_val == NULL) {
                    printf("(nil)");
                    first = 0;
                } else {
                    printf("%s", s_val);
                }
                break;
            }
            default:
                break;
        }

p++;
}

printf("\n");
va_end(ab);
}
