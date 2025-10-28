#include "main.h"

/**
*_strlen_recursion - To print a text string
* @s : obshin
* @ Return : 0/1
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);

}
return (1 +  _strlen_recursion(s + 1));
}

