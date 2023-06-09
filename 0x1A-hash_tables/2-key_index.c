#include "hash_tables.h"

/**
 * key_index - Assign index to a key.
 * @key: Key to be indexed.
 * @size: Size of the hash table.
 * Return: Integer after the operations.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int res;

	res = hash_djb2(key) % size;
	return (res);
}
