#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number
 * Return: 0
 */

int factorial(int n)
{
if (n < 2 && n > 0)
return (1);
else if (n < 0)
return (-1);
else if (n > 1)
return (n * factorial(n - 1));
else
return (0);
}

