#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr- prints buffer in hexa
 * @ac: the address of memory to print
 *  @av: the address of memory to print
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
    int t, i, len, j, total = 0;
    char *p;
    char *c;
    
    if (ac == 0 || av == NULL)
    {
        return (NULL);
    }
    
    for (t = 0; t < ac; t++)
    {
        for (len = 0; av[t][len] != '\0'; len++)
        {
            total += len + 1;
        }
    }
    
    p = malloc(total + 1);
    if (p == NULL)
        return (NULL);
    
    c = p;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            *c = av[i][j];
            c++;
        }
        *c = '\n';
        c++;
    }
    *c = '\0';
    return (p);
}
