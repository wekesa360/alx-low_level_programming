#include "main.h"
/**
 * _putchar - print out  a string
 * 
 * Return value : Always 0
 */
int _putchar(char)
{
unsigned int c;
char stringArray[8] = {'_','p','u','t','c','h','a','r'};
for ( c = 0; c < sizeof(stringArray); c++)
printf("%c",stringArray[c]);
return (0);
}