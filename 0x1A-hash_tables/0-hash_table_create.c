#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: The size of the array.
 * Return: newly created hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *H_T;
	unsigned long int i;

	H_T = malloc(sizeof(hash_table_t));
	if (!H_T)
		return (NULL);

	H_T->size = size;
	H_T->array = malloc(size * sizeof(hash_node_t *));

	if (!(H_T->array))
	{
		free(H_T);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		H_T->array[i] = NULL;

	return (H_T);
}
