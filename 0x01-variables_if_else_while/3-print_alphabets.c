#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints lower and upper case letters a to z and A to Z
 * 
 * return value: Always 0
 */ 
int main(void)
{
for (int i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (int j = 'A'; j <= 'Z'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}