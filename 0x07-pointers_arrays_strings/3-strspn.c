#include "main.h"
/**
 * _strspn - the main function
 * @s: first variable
 * @accept: second variable
 * Return: return value
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				i++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		s++;
	}
	return (i);
}
