#include <stdlib.h>
#include "hash_tables.h" // Assuming you have a header file for your data structures

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 * Return: A pointer to the newly created hash table, or NULL if an error occurs
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table = NULL;
    unsigned long int i;

    // Allocate memory for the hash table structure
    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
        return NULL;

    // Allocate memory for the array of hash_node_t pointers
    hash_table->array = malloc(sizeof(hash_node_t *) * size);
    if (hash_table->array == NULL)
    {
        free(hash_table);
        return NULL;
    }

    // Initialize the size of the hash table
    hash_table->size = size;

    // Initialize each element of the array to NULL
    for (i = 0; i < size; i++)
    {
        hash_table->array[i] = NULL;
    }

    return hash_table;
}
