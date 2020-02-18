#include "holberton.h"

/**
 * _strlen - lenght of a string
 *@s: variable
 * Return: 0
*/
int _strlen(char *s)
{
int c = 0;
while (*s[c] != '\0')
{
c++;
}
return (c);
}
