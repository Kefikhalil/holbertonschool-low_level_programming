#include "holberton.h"

/**
 * _strstr - locate string inside other string
 * @haystack: string
 * @needle: substring
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *begin = haystack;
char *pattern = needle;
while (*haystack && *pattern && *haystack == *pattern)
{
haystack++;
pattern++;
}
if (!(*pattern))
return (Begin);
haystack = begin + 1;
}
return (NULL);
}
