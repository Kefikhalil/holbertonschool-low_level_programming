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
int i, j;

i = j = 0;
while (*(dest + i))
i++;
while ((*(dest + i) = *(src + j)))
{
i++;
j++;
}
return (dest);
}
