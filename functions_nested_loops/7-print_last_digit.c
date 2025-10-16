#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int)
{
int last,n;

last = n % 10;
if (last < 0)
last = last * -1;
printf("%d", last);
return (last);
}
