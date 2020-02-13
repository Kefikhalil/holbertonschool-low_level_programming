#include "holberton.h"
/**
 *more_numbers - print all numbers
 *
 *Return: void.
*/

void more_numbers(void)
{
int x, n;

x = 0;
while (i < 10)
{
n = 0;
while (n <= 14)
{
if (n >= 10)
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
n++;
}
_putchar('\n');
x++;
}
}
