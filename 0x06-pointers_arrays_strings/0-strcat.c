#include "main.h"
/**
 * _strcat - this is the main function
 * @dest: first variable
 * @src: second variable
 * Return: returns result
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (result);
}
