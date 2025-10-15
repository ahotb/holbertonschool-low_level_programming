#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int un;
for (un = '0'; un <= '9'; un++)
putchar('0' + un);
if (un != 9)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
