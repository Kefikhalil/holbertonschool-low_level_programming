#include "holberon.h"

/**
 *print_line - function that draws a straight line in the terminal
 *
 *@n: n parameter
 *Return: 0
*/

void print_line(int n)
{
int x;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
_putchar('_');
}
_putchar('\n');
}
}
