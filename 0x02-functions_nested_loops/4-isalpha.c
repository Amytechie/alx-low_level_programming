#include "main.h"

/**
 * _isalpha - this prints in alpha
 *
 * @c: this is the integer
 *
 * Return: is either 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
