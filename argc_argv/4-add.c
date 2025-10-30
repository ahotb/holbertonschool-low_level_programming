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
int i;
int j;
char *str;
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
str = argv[i];
j = 0;
if (str[j] == '\0')
{
printf("Error\n");
return (1);
}
while (str[j] != '\0')
{
if (str[j] < '0' || str[j] > '9')
{
printf("Error\n");
return (1);
}
j++;
}
}
for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
