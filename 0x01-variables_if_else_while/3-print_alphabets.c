#include <stdio.h>

/**
 * main - Learning abc's
 *
 * Return:0
 */

int main(void)
{
	char ch = '1';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
