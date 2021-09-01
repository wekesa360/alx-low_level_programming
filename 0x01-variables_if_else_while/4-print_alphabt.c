#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints lower case letters a to z exception of e and q
 * 
 * return value: Always 0
 */ 
int main(void)
{
for (int i = 'a'; i <= 'z'; i++)
{
if (i != 'e' && i != 'q')
putchar(i);
}
putchar('\n');
return (0);
}