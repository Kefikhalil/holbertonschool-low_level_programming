#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separator
 * @n: number
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list ap;
unsigned int i;

if (separator == NULL)
separator = "";

va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (i + 1 < n)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
