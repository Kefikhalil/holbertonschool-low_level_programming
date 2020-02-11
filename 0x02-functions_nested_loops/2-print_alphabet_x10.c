#include "holberton.h"
/**
 *print_alphabet - printf alphabets
 */

void print_alphabet(void)
{
char ch;
int x;

for (x = 1; x <= 10; ++x)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
++x;
}
_putchar('\n');
}
}
