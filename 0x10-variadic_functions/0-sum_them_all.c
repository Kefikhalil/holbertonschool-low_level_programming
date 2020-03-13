#include <stdarg.h>
#include "holberton.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{

va_list list;
int i;
int s = 0;

if (n == 0)
return (0);

va_start(list, n);

for (i = 0 ; i < n ; i++)
s += va_arg(list, int);
va_end(list);

return (s);
}
