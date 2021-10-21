#include "holberton.h"

/**
 * _sqrtValidate - checks for the squareroot of c
 * 
 * @y:guess at sqrt
 * @param r: number to find sqrt of 
 * Return: -1 or sqrt of c
 */

int _sqrtValidate(int y, int r){
	if (y * y == r)
		return y;
	if (y * y > r)
		return (-1);
	return (_sqrtValidate(y + 1, r));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrtValidate(1, n));
}