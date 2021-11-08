#include "holberton.h"
#include <stdio.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 * 
 * Return: A pointer to the allocated memory.
 */

Void *malloc_checked(unsigned int b)
{
    void *mem = malloc(b);
    if ( mem == NULL)
        exit(98);
        
    return (mem);
}