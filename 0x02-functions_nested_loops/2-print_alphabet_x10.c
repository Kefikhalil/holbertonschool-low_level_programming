#include "holberton.h"
/**
 *print_alphabet_x10 - printf alphabets ten times
 */

void print_alphabet_x10(void)
{
int n, x;
for (x = 1; x <= 10; ++x)
{
n = 'a';
while (n <= 'z')
{
_putchar(n);
++n;
}
_putchar('\n');
}
}
