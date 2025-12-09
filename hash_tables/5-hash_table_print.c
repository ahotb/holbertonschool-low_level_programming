#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

void hash_table_print(const hash_table_t *ht)
{
	int i = 0, first = 1;
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
		printf("\"%s\" = '%s'", lst->key, lst->value);
		lst = lst->next;
		}
	}
	printf("}\n");
}