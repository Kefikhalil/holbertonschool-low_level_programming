#include <stdio.h>

/**
 * _strchr - locate character in stirng
 * @s: string
 * @c: char
 * Return: 0
*/
char *_strchr(char *s, char c)
{
int i = 0;

for (i = 0 ; s[i] != '\0' ; i++)
{
if (s[i] == c)
break;
}
if (s[i] == c)
return (&s[i]);
else
return (NULL);
}
