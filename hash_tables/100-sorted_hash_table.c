#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 * Return: pointer to the created hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->array = calloc(size, sizeof(shash_table_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}
/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: pointer to the hash table
 * @key: key to add
 * @value: value associated with the key
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long idx;
	shash_node_t *current, *new_node, *tem;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (current->value ? 1 : 0);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	new_node->sprev = NULL;
	new_node->snext = NULL;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(new_node->key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else if (strcmp(new_node->key, ht->stail->key) > 0)
	{
		new_node->sprev = ht->stail;
		ht->stail->snext = new_node;
		ht->stail = new_node;
	}
	else
	{
		tem = ht->shead;
		while (tem != NULL && strcmp(new_node->key, tem->key) > 0)
		{
			tem = tem->snext;
		}
		new_node->sprev = tem->sprev;
		new_node->snext = tem;
		tem->sprev->snext = new_node;
		tem->sprev = new_node;
	}
	return (1);
}
/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: key to look for
 * Return: value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
/**
 * shash_table_print - prints the sorted hash table
 * @ht: pointer to the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	int first = 1;
	shash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		if (!first)
			printf(", ");

		printf("'%s': '%s'", node->key, node->value);
		first = 0;
		node = node->snext;
	}

	printf("}\n");
}
/**
 * shash_table_print_rev - prints the sorted hash table in reverse order
 * @ht: pointer to the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int first = 1;
	shash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		if (!first)
			printf(", ");

		printf("'%s': '%s'", node->key, node->value);
		first = 0;
		node = node->sprev;
	}

	printf("}\n");
}
/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: pointer to the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned int i = 0;
	shash_node_t *node, *next;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
	}
	free(ht->array);
	free(ht);
}
