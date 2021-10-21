#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @r: int argument for the function absoluteInt
 * Return value: Always 0
 */
int _abs(int r)
{
if (r > 0 || r == 0)
{
return (r);
}
else
return (r * -1);
}