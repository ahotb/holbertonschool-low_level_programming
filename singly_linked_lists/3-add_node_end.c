#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
int i = 0;
list_t *t = *head;
list_t *new_node;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
while (str[i] != '\0')
{
i++;
}
new_node->len = i;
if (t == NULL)
{
*head = new_node;
return (*head);
}
while (t->next != NULL)
{
t = t->next;
}
t->next = new_node;
new_node->next = NULL;
return (*head);
}
