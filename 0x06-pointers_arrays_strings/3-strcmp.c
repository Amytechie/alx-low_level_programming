#include "main.h"
/**
 * _strcmp - the function
 * @s1: first variable
 * @s2: second variable
 * Return: retuern value
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
