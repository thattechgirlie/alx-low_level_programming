#include "hash_tables.h"
/**
 * hash_table_t - code to make hash table
 * @size: size of arrays
 * Return: returns NULL or pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsht;
	unsigned long int a;
	
	hsht = malloc(sizeof(hash_table_t));
	if (hsht == NULL)
		return (NULL);
	hsht->size = size;
	hsht->array = malloc(sizeof(hash_node_t *) * size);
	if (hsht->array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		hsht-> array[a] = NULL;
	return (hsht);
}
