#include "hash_tables.h"

/**
 * hash_table_print - prints a has table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x = 0;
	hash_node_t  *store;
	int not = 0;

	if (!ht)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		store = ht->array[x];
		while (store)
		{
			if (not)
				printf(", ");
			printf("'%s': '%s'", store->key, store->value);
			not = 1;
			store = store->next;
		}
	}
	printf("}\n");
}
