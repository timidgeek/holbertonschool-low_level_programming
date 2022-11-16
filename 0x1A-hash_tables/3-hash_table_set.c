#include "hash_tables.h"
/**
* hash_table_set - adds an element to the hash table
* @ht: hash table
* @key: key
*	can not be empty string
* @value: value
*	associated with key
*	must be dublicated
*	can be an empty string
*
* Return: 1 upon success, 0 upon failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
