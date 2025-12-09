#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	int first = 1;
	hash_node_t *lst;
	
	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		lst = ht->array[i];

		while (lst != NULL)
		{
		if (!first)
		{
			printf(", ");
		}
		else
		{
			first = 0;
		}
		printf("'%s': '%s'", lst->key, lst->value);
		lst = lst->next;
		}
	}
	printf("}\n");
}
