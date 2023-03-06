#include "main.h"
/**
 * _memset - the main function
 * @s: the first variable
 * @b: the second variable
 * @n: the integer
 * Return: return value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
