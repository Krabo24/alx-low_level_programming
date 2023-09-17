#include "hash_tables.h"

/**
 * key_index - get the index for the given key
 * @key: key (string) to hash
 * @size: size of the hash table
 * Return: index of the 'key' using djb2
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)

{
	return (hash_djb2(key) % size);
}
