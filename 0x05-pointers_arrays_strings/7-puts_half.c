#include "holberton.h"

/**
 * _strlen - lenght
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
 * puts_half - 
 *
 * @str:
 * Return: 0
 */

void puts_half(char *str)
{
int i;

i = _strlen(str);
if (i % 2 != 0)
i++;
i /= 2;
while (str[i] != '\0')
_putchar(str[i++]);
_putchar(10);
}
