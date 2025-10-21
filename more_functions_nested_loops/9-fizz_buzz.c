#include <stdio.h>
/**
* print_line- checks for uppercase character
*
* @n: oen back
* Return: 1 if c is uppercase, 0 otherwise
*/
int main(void)
{
int x;
for (x = 1; x <= 100; x++)

if (x % 3 == 0)
{
printf("Fizz ");
}
else if (x % 5 == 0)
{
printf("Buzz ");
}
else
{
printf(" %d ",x);
}
printf("\n");
return (0);
}
