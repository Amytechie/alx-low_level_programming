#include "main.h"
/**
 * reverse_array - reverse array
 * @a: variable
 * @n: second variable
 */

void reverse_array(int *a, int n)
{
	int *p1 = a;
	int *p2 = a + n - 1;

	if (n <= 1)
	{
		return;
	}
	while (p1 < p2)
	{
		int *p1 = a;
		int *p2 = a + n - 1;
		int temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++;
		p2--;
	}
}

