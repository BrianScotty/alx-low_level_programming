#include "hash_tables.h"

/**
 * sorted_list - inserts a new node
 * @ht: hash table
 * @new_node: new node
 *
 */

void sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *sbucket = ht->shead;

	if (sbucket == NULL)
	{
		ht->shead = ht->stail = new_node;
		new_node->snext = new_node->sprev = NULL;
		return;
	}
	do {
		if (strcmp(new_node->key, sbucket->key) < 0)
		{
			new_node->snext = sbucket;
			new_node->sprev = sbucket->sprev;

			if (!sbucket->sprev)
				ht->shead = new_node;
			else
				sbucket->sprev->snext = new_node;
			sbucket->sprev = new_node;
			return;
		}
		sbucket = sbucket->snext;
	} while (sbucket);
	new_node->sprev = ht->stail;
	new_node->snext = ht->stail->snext;
	ht->stail->snext = new_node;
	ht->stail = new_node;
}

/**
 * shash_table_create - creates a sorted hash table
 * @size: size
 * Return: pointer to the hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	if (size == 0)
		return (NULL);

	table = calloc(1, sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: hash table
 * @key: key
 * @value: value to add the element
 * Return: 1 (success), 0 (otherwise)
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valuecopy, *keycopy;
	shash_node_t  *store, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);
	valuecopy = strdup(value);
	if (!valuecopy)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	store = ht->array[index];

	while (store)
	{
		if (!strcmp(key, store->key))
		{
			free(store->value);
			store->value = valuecopy;
			return (1);
		}
		store = store->next;
	}
	new_node = calloc(1, sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(valuecopy);
		return (0);
	}
	keycopy = strdup(key);
	if (!keycopy)
		return (0);
	new_node->key = keycopy;
	new_node->value = valuecopy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	sorted_list(ht, new_node);
	return (1);
}

/**
 * shash_table_get - function to retrieve value associeted with key
 * @ht: hash table
 * @key: key
 * Return: value or NULL if key does not exit.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t  *store;

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

/**
 * shash_table_print - function to print the key value
 * @ht: hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *store;
	int not = 0;

	if (!ht)
		return;
	store = ht->shead;
	printf("{");
	while (store)
	{
		if (not)
			printf(", ");
		printf("'%s': '%s'", store->key, store->value);
		not = 1;
		store = store->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function to print the key value in reverse
 * @ht: hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *store;
	int not = 0;

	if (!ht)
		return;
	store = ht->stail;
	printf("{");
	while (store)
	{
		if (not)
			printf(", ");
		printf("'%s': '%s'", store->key, store->value);
		not = 1;
		store = store->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - frees hash table
 * @ht: hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *store, *aux_del;
	unsigned long int x = 0;

	if (!ht)
		return;

	for (x = 0; x < ht->size; x++)
	{
		store = ht->array[x];
		while (store)
		{
			aux_del = store;
			store = store->next;
			if (aux_del->key)
				free(aux_del->key);
			if (aux_del->value)
				free(aux_del->value);
			free(aux_del);
		}
	}
	free(ht->array);
	free(ht);
}
