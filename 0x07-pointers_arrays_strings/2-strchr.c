#include "main.h"
/**
 * _strchr - the main function
 * @s: the variable
 * @c: second variable
 * Return: return value
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
