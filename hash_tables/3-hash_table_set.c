#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: pointer to the hash table
 * @key: key to add
 * @value: value associated with the key
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *new_node, *tem;
	
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	
	index = key_index((const unsigned char *)key, ht->size);
	tem = ht->array[index];
	while (tem != NULL)
	{
		if (strcmp(tem->key, key) == 0)
		{
		free(tem->value);
		tem->value = strdup(value);
		if (tem->value == NULL)
			return (0);
		return (1);
		}
		tem = tem->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
