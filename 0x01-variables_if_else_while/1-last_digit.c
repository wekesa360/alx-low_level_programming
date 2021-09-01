#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - prints the last digit of a number
 * if less than 6 and not 0 and greater than 5
 * @n: a random number
 * 
 * return value:Always 0
 */ 
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastDigit = n % 10;
if (lastDigit > 5)
printf("Last digit of %d is %d and is greater than 5",n,lastDigit);
if (lastDigit == 0)
printf("Last digit of %d is %d and is 0",n,lastDigit);
if (lastDigit < 5 && lastDigit != 0)
printf("Last digit of %d is %d and is less than 6 and not 0",n,lastDigit);
return (0);
}
