#include <stdio.h>

/**
 * main - print all numbers
 * Description: putchar and loop
 * Return: 0
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (ch = 'a'; ch < 'g'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
