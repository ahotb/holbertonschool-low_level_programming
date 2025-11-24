#include "main.h"

/**
* factorial - To print a text string
* @n : obshin
* Return: 0/1
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}

