#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;
	unsigned int i;

	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
	return (NULL);
	newtable->size = size;
	newtable->array = malloc(size * sizeof(*(newtable->array)));
	if (newtable->array == NULL)
	{
		free(newtable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	newtable->array[i] = NULL;
	}

	return (newtable);
}
