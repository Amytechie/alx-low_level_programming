#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @num: this is the integer
 *
 * Return: this is the return value
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}
