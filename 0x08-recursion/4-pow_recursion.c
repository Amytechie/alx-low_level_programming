#include "main.h"
/**
 * _pow_recursion - the main function
 * @x: the variable
 * @y: the second variable
 * Return: return value
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
