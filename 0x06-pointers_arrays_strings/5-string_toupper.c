#include "main.h"
/**
 * string_toupper - prints strings to upper case
 * @str: variable
 * Return: returm value
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p -= 32;
		}
		p++;
	}
	return (str);
}
