#include <stdio.h>
#include <unistd.h>
/**
 * main - this is the main function
 *
 * Return: this is constant 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
