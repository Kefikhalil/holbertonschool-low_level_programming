#include "holberton.h"
/**
 * main - _putchar alphabets
 * Description: -main
 */

void print_alphabet(void);
{
	char ch = '1';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
