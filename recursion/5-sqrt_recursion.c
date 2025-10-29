#include "main.h"

/**
 * sqrt_helper - Helper function to find natural square root recursively
 * @n: original number (constant)
 * @x: current candidate to test (x * x == n?)
 *
 * Return: natural square root if found, -1 otherwise
 */

int sqrt_helper(int n, int x)
{
if (x * x == n)
return (x);
if (x * x > n)
return (-1);
return (sqrt_helper(n, x + 1));

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n has no natural square root
 */
}
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (sqrt_helper(n, 0));
}

