#include "hash_tables.h"

/**
 * hash_djb2 - Hash function for djb2 algorithm.
 * @str: Key
 *
 * Return: Integer after the operations.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;
	hash = 5382;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; 
	}
	return (hash);
}
