#include "main.h"
/**
 * print_rev - prints reverse
 * @s: the variable
 */

void print_rev(char *s)
{
	if (*s)
	{
		print_rev(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
