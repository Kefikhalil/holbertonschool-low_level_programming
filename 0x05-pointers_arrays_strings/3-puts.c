#include "holberton.h"

/**
 * _puts - print a string
 *
 * @str: string
 * Return: 0
 */

void _puts(char *str)
{
int i, j;
while (str[i] != '\0')
{
i++;
}
for (j = 0; j < i; j += 2)
{
_putchar (str[j]);
}
_putchar ('\n');
}
