#include <stdio.h>

/**
 * main - the main function gets the size of various types
 *
 * Return: returns the value to 0
 */

int main(void)
{
	printf("char size: %lu byte(s)\n", sizeof(char));
	printf("int size: %lu byte(s)\n", sizeof(int));
	printf("short size: %lu byte(s)\n", sizeof(short));
	printf("long size: %lu byte(s)\n", sizeof(long));
	printf("float size: %lu byte(s)\n", sizeof(float));
	printf("double size: %lu byte(s)\n", sizeof(double));
	printf("long double size: %lu byte(s)\n", sizeof(long double));
	return (0);
}
