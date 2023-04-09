#include "main.h"
/**
 * clear_bit - this function sets the value of a bit to 0
 * @n: the string for unsigned long integer variable
 * @index: the unsigned integer variable
 * Return: the return value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
