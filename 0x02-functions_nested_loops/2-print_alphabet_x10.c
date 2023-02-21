#include "main.h"

/**
 * print_alphabet_x10 - this prints the alphabet 10 times
 *
 * Return: return value is 0
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
