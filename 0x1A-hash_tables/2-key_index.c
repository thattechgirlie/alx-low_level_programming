#include "hash_tables.h"
/**
 * key_index - code of key index
 * @key: index key to get
 * @size: size of array
 * Return: returns index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size){
	return (hash_djb2(key) % size);
}
