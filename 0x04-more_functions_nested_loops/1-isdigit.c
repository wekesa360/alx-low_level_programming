#include "main.h"
/**
 * _isdigit - function that checks for a digit 
 * Return value: 1 if true
 * @c: parameter
 */

int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
return (0);
}