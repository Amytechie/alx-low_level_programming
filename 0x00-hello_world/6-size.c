#include <stdio.h>

/**
 * main - the main function gets the size of various types
 *
 * Return: returns the value to 0
 */

int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a short: %lu byte(s)\n", sizeof(short));
	printf("size of a long: %lu byte(s)\n", sizeof(long));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	printf("size of a double: %lu byte(s)\n", sizeof(double));
	printf("size of a long double: %lu byte(s)\n", sizeof(long double));
	return (0);
}
