#include "main.h"

/**
 * get_bit - this function gets the bit
 * @n: the unsigned long integer variable
 * @index: the unsigned integer variable
 * Return: the return value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		return ((n & mask) != 0);
	}
}
