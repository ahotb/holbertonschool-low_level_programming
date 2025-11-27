#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the
 * data (n) of a doubly linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data (n) of the list,
 * if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp = head;
int sum = 0;
if (temp == NULL)
{
return (0);
}
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}