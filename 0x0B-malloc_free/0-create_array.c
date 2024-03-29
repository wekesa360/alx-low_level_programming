#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create array of chars initialized with a specific char
 * @size; size of array
 * @c: char to initialize with
 * 
 * Return: Pointer to an array, or NULL if it fails 
 * 
 */
char *create_array(unsigned int size, char c){

	char *ar;
	unsigned int i;
	i = 0;
	if ( size != 0)
		ar = malloc(size * sizeof(c));
	else
		return (NULL);
		if (ar == NULL)
			return ( NULL);
		while (i < size){
			ar[i] = c;
			i++;
		}
		return (ar);
}