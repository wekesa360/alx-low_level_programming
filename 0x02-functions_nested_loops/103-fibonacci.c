#include <stdio.h>
/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *          terms not exceeding 4000000.
 * Return Value: always 0.
 */
int main(void)
{
unsigned long f1 = 0, f2 = 1, fibSum;
float totalSum;
while (1)
{
fibSum = f1 + f2;

if (fibSum > 4000000)
break;
if ((fibSum % 2) == 0)
totalSum += fibSum;

f1 = f2;
f2 = fibSum;
}
printf("%.0f\n", totalSum);

return (0);
}