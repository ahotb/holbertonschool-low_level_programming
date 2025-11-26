#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"



size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;
while (h)
{
if (!h->prev)
{
printf("[0] (nil)\n");
}
else
{
printf("%d\n", h->prev);
}
i++;
h = h->next;
}
return (i);
}
