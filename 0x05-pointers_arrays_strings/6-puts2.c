#include "holberton.h"

/**
 * _strlen - return the length
 *
 * @s:
 * Return: 0
 */

int _strlen(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
i++;
return (i);
}


/**
 * puts2 - prints
 *
 * @str:
 * Return: 0
 */

void puts2(char *str)
{
int i;

i = 0;
while (i < _strlen(str))
{
_putchar(str[i]);
i += 2;
}
_putchar(10);
}                                                                                                   ~       
