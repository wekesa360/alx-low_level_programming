#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints possible non-repeating combinatation of three digits
 * 
 * return value: Always 0
 */ 
int main ()
{
int dig1, dig2, dig3;
for(dig1 = 0; dig1 <= 9; dig1++)
{
for(dig2 = dig1 + 1; dig2 <= 9; dig2++)
{
for(dig3 = dig2 + 1; dig3 <= 9; dig3++)
{
putchar(dig1);
putchar(dig2);
putchar(dig3);
if (dig1 == 7 && dig2 == 8 && dig3 == 9)
continue;
putchar(', ');
}
}
}    
return (0);
}