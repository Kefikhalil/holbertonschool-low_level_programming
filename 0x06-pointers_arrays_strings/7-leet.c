#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */

char *leet(char *c)
{
int i = 0;
int j;
char letter[] = "AEOTL";
char num[] = {'4', '3', '0', '7', '1'};
	
while (c[i] != '\0')
{
for (j = 0; letter[j] != '\0'; j++)
{
if ((c[i] == letter[j]) || (c[i] == letter[j] + 32))
{
c[i] = num[j];
}
}
i++;
}
return (c);
}
