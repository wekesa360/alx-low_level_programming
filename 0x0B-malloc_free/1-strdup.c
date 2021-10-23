#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup -Return a pointer to a new a string that duplicates a given string,
 * allocate memory with malloc
 * @str: String to duplicate
 * 
 * Return: Pointer to a new string, NULL if failed to make memory
 * 
 */
char *_strup(char *str){

	char *newStr;
	unsigned int i;
	unsigned int len;

	if ( str == NULL)
		return (NULL);
	i = len = 0;
	while(str[len] != '\0'){
		len++;
	}
	len++;
	newStr = malloc( len * sizeof(*str));
	if (newStr == NULL)
		return (NULL);
	while (i <= len){
		newStr[i] = str[i];
		i++; 
	}
	return (newStr);
}

