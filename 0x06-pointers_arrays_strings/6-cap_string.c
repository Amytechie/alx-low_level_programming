#include "main.h"
/**
 * cap_string - capitalises string
 * @str: the variable
 * Return: return value
 */

char *cap_string(char *str)
{
	char *p = str;
	int capitalize_next = 1;

	while (*p)
	{
		if (capitalize_next && (*p >= 'a' && *p <= 'z'))
		{
			*p -= 32;
		}
		capitalize_next = (*p == ' ' || *p == '\t' || *p == '\n' ||
				*p == ',' || *p == ';' || *p == '.' ||
				*p == '!' || *p == '?' || *p == '"' ||
				*p == '(' || *p == ')' || *p == '{' ||
				*p == '}');
		p++;
	}
	return (str);
}
