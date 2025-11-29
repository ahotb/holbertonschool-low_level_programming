#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer to be added to the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t  *add_node;
if (h == NULL)
{
return (NULL);
}
dlistint_t *current = *h;
unsigned int i = 0;
add_node = malloc(sizeof(dlistint_t));
if (add_node == NULL)
{
return (NULL);
}
add_node->n = n;
add_node->prev = NULL;
add_node->next = NULL;
if (idx == 0)
{
add_node->next = *h;
if (*h != NULL)
{
(*h)->prev = add_node;
*h = add_node;
return (add_node);
}
}
while (i < idx - 1 && current != NULL)
{
current = current->next;
i++;
}
if (current == NULL)
{
free(add_node);
return (NULL);
}
if (current->next != NULL)
current->next->prev = add_node;
current->next = add_node;
return (add_node);
}
