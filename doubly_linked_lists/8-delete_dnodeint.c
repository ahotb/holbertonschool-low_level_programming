#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int i = 0;
    if (head == NULL || *head == NULL)
    {
        return -1;
    }
    if (index == 0)
    {
        dlistint_t *node_to_delete = *head;
        *head = (*head)->next;
        if (*head != NULL)
        (*head)->prev = NULL;
        free(node_to_delete);
        return (1);
    }
    else
    {
    while (i < index && current != NULL)
    {
        current = current->next;
        i++;
    }
    if (current == NULL)
    return (-1);
    current->prev->next = current->next;
    if (current->next != NULL)
    current->next->prev = current->prev;
    free(current);
    return (1);
    }
}
