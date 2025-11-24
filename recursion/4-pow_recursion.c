#include "main.h"

/**
* _pow_recursion - To print a text string
* @x : obshin
* @y :obshin
* Return: 0/1
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x *  _pow_recursion(x, y - 1));
}

