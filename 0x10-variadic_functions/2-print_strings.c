#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: separator
 * @n: number
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)

{

char *str;
unsigned int i;
va_list valist;
	
va_start(valist, n);
for (i = 0; i < n; i++)
{

str = va_arg(valist, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
if (i < n - 1 && separator)
printf("%s", separator);

}

printf("\n");
va_end(valist);
}
