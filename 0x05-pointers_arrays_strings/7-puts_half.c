#include "main.h"
/**
 * puts_half - this is the main function
 * @str: the variable
 */

void puts_half(char *str)
{
	int len = 0;
	int start;

	while (str[len])
	{
		len++;
	}
	start = (len + 1) / 2;

	while (str[start])
	{
		_putchar(str[start++]);
	}
	_putchar('\n');
}

