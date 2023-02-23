#include "main.h"
extern int _putchar(char c);

/**
 * print_numbers - prints rumbers
 * @void: null
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
