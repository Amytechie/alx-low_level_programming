#include <stdio.h>

/**
 * main - the main function gets the size of various types
 *
 * Return: returns the value to 0
 */

int main(void)
{
	printf("size of a char: %lu byte(s)", sizeof(char));
	printf("size of an int: %lu byte(s)", sizeof(int));
	printf("size of a short: %lu byte(s)", sizeof(short));
	printf("size of a long: %lu byte(s)", sizeof(long));
	printf("size of a float: %lu byte(s)", sizeof(float));
	printf("size of a double: %lu byte(s)", sizeof(double));
	printf("size of a long double: %lu byte(s)", sizeof(long double));
	return (0);
}
