#include "holberton.h"

/**
 * print_rev - print a string
 *
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
int x;

x = 0;
while (s[x] != '\0')
x++;
x--;
while (x >= 0)
_putchar(s[x--]);
_putchar(10);
}
