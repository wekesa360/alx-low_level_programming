#include "main.h"
/**
 * print_triangle - Function that prints a triangle, followed by
 *                      by a new line.
 * @size: The int for the parameter of the function
 * REturnvalue: Always 0
 */
void print_triangle(int size)
int y, x;
int space;
if (size > 0)
{
while (y < size)
{
space = size - y - 1;
while (x < size)
{
if ( space > x)
{
_putchar(' ');
}
else
{
_putchar('#');
}
x++;
}
y++;
x = 0;
_putchar('#');
}
else
_putchar('\n');
}