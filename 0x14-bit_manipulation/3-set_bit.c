#include "main.h"
/**
 * set_bit - this function sets the bit
 * @n: the string for unsigned long int n
 * @index: the unsigned integer variable
 * Return: the return value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= (1ul << index);

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
