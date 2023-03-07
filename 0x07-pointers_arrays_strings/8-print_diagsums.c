#include "main.h"
/**
 * print_diagsums - prints the sum of diagonals
 * @a: first pointer
 * @size: second pointer
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - 1 - i);
	}

	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
