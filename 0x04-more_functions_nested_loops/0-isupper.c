#include "holberton.h"
/**
* _isupper - check if c is uppercase.
*
* @c: integer to check
*Return: 1 if c is upper , else 0
*/

int _isupper(int c)
{
if (c <= 65 && c <= 90)
return (1);
else
return (0);
}
