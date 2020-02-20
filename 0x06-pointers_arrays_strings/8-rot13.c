#include "holberton.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string
 * Return: 0
*/

char *rot13(char *s)
{
int i, j;
char base[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; *(s + i) != '\0'; i++)
{
for (j = 0; *(base + j) != '\0'; j++)
if (*(s + i) == *(base + j))
{
*(s + i) = *(rot13 + j);
break;
			}
}
return (s);
}
