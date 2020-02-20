#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
int z, x;
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";

for ( = 0; *(s + z); z++)
{
for (x = 0; x <= 9; x++)
{
if (a[x] == *(s + z))
*(s + z) = b[x];
}
}
return (s);
}
