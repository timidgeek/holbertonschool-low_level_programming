#include "hash_tables.h"
/**
* key_index - gives you the index of a key; the sorting hat
* @key: the key
* @size: the size of the array of the hash table
*
* Return: the index where the key/value pair shall be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
