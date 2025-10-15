#include "main.h"
/**
* print_alphabet - prints the alphabet in lowercase
*
* Description: This function prints all lowercase letters
* of the English alphabet, followed by a new line,
* using the _putchar function only.
*/
void print_alphabet(void)
{
char st;
for (st = 'a'; st <= 'z'; st++)
{
_putchar(st);
}
_putchar('\n');
}
