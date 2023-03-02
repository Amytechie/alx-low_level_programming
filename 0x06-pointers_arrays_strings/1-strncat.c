#include "main.h"
/**
 * _strncat - the main function
 * @dest: destinatrion
 * @src: poiner to char data
 * @n: the intebger
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;

	char *src_end = src;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*src_end != '\0' && n-- > 0)
	{
		dest_end[0] = src_end[0];
		dest_end++;
		src_end++;
	}
	dest_end[0] = '\0';
	return (dest);
}
