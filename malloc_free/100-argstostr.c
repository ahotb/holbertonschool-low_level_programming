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
	int i, j, total = 0;
	char *str, *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			;
		total += j + 1;
	}
	str = malloc(sizeof(char) * total + 1);
	if (str == NULL)
		return (NULL);
	ptr = str;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			*ptr = av[i][j];
			ptr++;
		}
		*ptr = '\n';
		ptr++;
	}
	*ptr = '\0';
	return (str);
}
