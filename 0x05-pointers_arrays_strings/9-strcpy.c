#include "main.h"
#include <stdio.h>
/**
 * _strcpy - the function
 * @dest: the destination
 * @src: the variable
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for  (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
