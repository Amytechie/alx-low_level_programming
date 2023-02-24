#include <stdio.h>
#include <math.h>
/**
 * main - this is the function
 * Return: value is 0
 */

int main(void)
{
	long int num = 612852475143;
	int largest_f = 1;
	int i;

	while (num % 2 == 0)
	{
		largest_f = 2;
		num /= 2;
	}
	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largest_f = i;
			num /= i;
		}
	}
	if (num > 2)
	{
		largest_f = num;
	}

	printf("%d\n", largest_f);

	return (0);
}
