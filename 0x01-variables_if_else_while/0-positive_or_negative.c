#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - prints if a number is
 * negative, zero or positive
 * 
 * @n: a random number
 * 
 * return value:Always 0
 */ 
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n == 0)
printf("%d is zero", n);
else if (n > 0)
printf("%d is positive", n);
else
printf("%d is negative", n);
return (0);
}
