#include "main.h"
/**
 * _putchar - print out  a string
 * 
 * Return value : Always 0
 */
int _putchar(char c)
{
unsigned int i;
char stringArray[8] = {'_','p','u','t','c','h','a','r'};
for ( i = 0; i < sizeof(stringArray); i++)
printf("%c",stringArray[i]);
return (0);
}