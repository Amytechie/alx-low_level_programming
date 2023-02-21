#include "main.h"

/**
 * jack_bauer - name of variable
 *
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');
		}
	}
}
