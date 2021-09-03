#include <stdio.h>
#include "main.h"

/** 
 * main - Lists all the natural numbers below 1024(excluded)
 *          multiples of 3 or 5 only
 * Return: ALways 0
 */
int main(void)
{
int sum;
sum = 0;
for (int i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}
printf("%d\n", sum)
return (0);
}