#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct hash_node_s - Node of hash table
 * @key: key string
 * @value: value corresponding to key
 * @next: pointer to next node of list
 */

typedef struct hash_node_s

{
	 char *key;
	 char *value;
	 struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - hash table data structure
 * @size: size of array
 * @array: array of size  @size
 * each cell of this array is a pointer to first node of linked list we want
 * the HashTable to use a Chaining collision handling
 */

typedef struct hash_table_s

{
	 unsigned long int size;
	 hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
void hash_table_print(const hash_table_t *ht);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: key, string
 * key is unique in HashTable
 * @value: value corresponding to key
 * @next: pointer to next node of list
 * @sprev: pointer to previous element of sorted linked list
 * @snext: pointer to next element of sorted linked list
 */

typedef struct shash_node_s

{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: size of the array
 * @array: array of size @size
 * Each cell of this array is a pointer to the first node of a linked list
 * because we want our HashTable to use a Chaining collision handling
 * @shead: pointer to first element of sorted linked list
 * @stail: pointer to last element of sorted linked list
 */

typedef struct shash_table_s

{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
void shash_table_delete(shash_table_t *ht);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_print(const shash_table_t *ht);

#endif /*_HASH_TABLES_H_*/
