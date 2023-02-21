#include "main.h"

/**
 * _islower - prints the alphabet in lower case
 *
 * @c: this is the integer
 *
 * Return: returns 1 and 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
