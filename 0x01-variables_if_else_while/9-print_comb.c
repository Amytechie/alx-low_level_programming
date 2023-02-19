#include <stdio.h>
#include <unistd.h>
/**
 * main - this is the main function
 *
 * Return: this is always constant
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
