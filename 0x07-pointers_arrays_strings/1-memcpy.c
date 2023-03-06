#include "main.h"
/**
 * _memcpy - main function
 * @dest: variable
 * @src: second variable
 * @n: third variable
 * Return: return value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;

	while (n--)
	{
		*temp++ = *src++;
	}
	return (dest);
}
