#include <stdio.h>
/**
 * main - prints alphabets in lowercase and reverse order
 * 
 * return value: Always 0
 */ 
int main (void)
{
for (int i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
