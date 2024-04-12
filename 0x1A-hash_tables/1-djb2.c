#include "hash_tables.h"

/**
 * hash_djb2 - function of the hash
 * @str: the string passed to the hash function
 * Return: the key value of the string
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33*/
	}
	return (hash);
}
