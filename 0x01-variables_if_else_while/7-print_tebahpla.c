#include <stdio.h>

/**
 * main - print a b c
 * Description:loop and putchar
 * Return:0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
