#include "main.h"
/**
 * _isupper - function that checks for uppercase charatcers
 * @c: the int for the paramaters 
 * Return value:  Always zero
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else 
return (0);
}