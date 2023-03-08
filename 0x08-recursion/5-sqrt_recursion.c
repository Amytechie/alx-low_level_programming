#include "main.h"
int _sqrt_helper(int n, int low, int high);
/**
 * _sqrt_recursion - the main function
 * @n: the variable
 * Return: the return value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0, n));
}

/**
 * _sqrt_helper - helps to compute the square root
 * @n: first variable
 * @low: second variable
 * @high: third variable
 * Return: the return value
 */

int _sqrt_helper(int n, int low, int high)
{
	int mid = (low + high) / 2;
	int sq = mid * mid;

	if (low > high)
	{
		return (-1);
	}

	if (sq == n)
	{
		return (mid);
	}
	else if (sq < n)
	{
		return (_sqrt_helper(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_helper(n, low, mid - 1));
	}
}
