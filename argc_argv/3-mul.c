#include <stdio.h>
#include <stdlib.h>

/**
* main - start argc and argv
* @argc : frest
* @argv : sacand
* Return: 0
*/

int main(int argc, char *argv[])
{

if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
else
{
printf("Error\n");
}
return (0);
}
