#include <stdio.h>
/**
* main - prints numbers 1-100 with Fizz, Buzz, FizzBuzz
*
* @FizzBuzz: oen back
* Return: 1 if c is uppercase, 0 otherwise
*/
int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (x % 15 == 0)
{
printf("FizzBuzz");
}
else if (x % 3 == 0)
{
printf("Fizz");
}
else if (x % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d",x);
}
if (x < 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
