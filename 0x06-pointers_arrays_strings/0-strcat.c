#include "holberton.h"

/**
 * _strcat - appends src
 * @dest: string
 * @src: string
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
int lenDest = _strlen(dest), lenSrc = _strlen(src);
int i;

for (i = 0 ; i < lenSrc ; ++i)
{
dest[lenDest + i] = src[i];
}
return (dest);
}
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
i++;
return (i);
}

