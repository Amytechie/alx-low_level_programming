#include "main.h"
/**
 * swap_int - swaps integers
 * @a: second variable
 * @b: first variable
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
