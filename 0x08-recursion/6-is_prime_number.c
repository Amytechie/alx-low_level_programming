#include "main.h"
/**
 * is_prime_number - prints prime numbers
 * @n: the variable
 * Return: the retuen value
 */

int is_prime_number(int n)
{
	int limit = sqrt(n);
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		for (int i = 3; i <= limit; i += 2)
		{
			if (n % i == 0)
			{
				return (0);
			}
		}
		return (1);
	}
}
