#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: pointer to the hash table
 * @key: key to retrieve
 *
 * Return: value associated with the key, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
		return (1);
		}
		current = current->next;
	}
		return (NULL);
}
