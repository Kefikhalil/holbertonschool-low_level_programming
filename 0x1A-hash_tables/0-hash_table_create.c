#include "hash_tables.h"


/**
 * hash_table_create - function that creates a hash table
 * @size: size of the hash table
 * Return: pointer to the Hash table
**/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	while (i < table->size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}
