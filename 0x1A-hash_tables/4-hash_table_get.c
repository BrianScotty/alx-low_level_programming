#include "hash_tables.h"

/**
 * hash_table_get -retrieves value associeted with a key
 * @ht: hash table
 * @key: the key
 *
 * Return: value or NULL if the key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t  *store;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	store = ht->array[index];

	while (store)
	{
		if (!strcmp(key, store->key))
			return (store->value);
		store = store->next;
	}
	return (NULL);
}
