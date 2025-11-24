#include "main.h"

/**
* spurt_number - To print a text string
* @n : obshin
* @i : spurt_number
* Return: 0/1
*/

int spurt_number(int n, int i)
{
if (i * i > n)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
return (spurt_number(n, i + 2));
}

/**
* is_prime_number - To print a text string
* @n : obshin
* Return: 0/1
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else if (n == 2)
{
return (1);
}
else if (n % 2 == 0)
{
return (0);
}
return (spurt_number(n, 3));
}
