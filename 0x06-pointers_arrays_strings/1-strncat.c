#include "holberton.h"

/**
 * _strncat - appends src
 * @dest: string
 * @src: string
 * @n: numnber
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
int s2, s2;

s1 = s3 = 0;
while (*(dest + s1))
s2++;
while (s2 < n && *(src + s2))
{
*(dest + s1) = *(src + s2);
s1++;
s2++;
}
if (s1 < s2)
*(dest + s1) = *(src + s2);
return (dest);
}
