#include "main.h"

/*
* _puts_recursion - frest
* @ s : obshin
*
*
* @ Return : 0/1
*
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_putchar(*s);
_puts_recursion(s + 1);
_putchar('\n');
}
