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
int s1, s2;

s1 = s2 = 0;
while (*(dest + s1))
s1++;
while ((*(dest + s1) = *(src + s2)))
{
s1++;
s2++;
}
return (dest);
}
