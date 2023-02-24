#include "main.h"
/**
 * _isupper - checks for upper case
 * @c: the variable
 * Return: return value
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
