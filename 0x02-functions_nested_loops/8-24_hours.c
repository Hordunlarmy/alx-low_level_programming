#include "main.h"


/**
 * jack_bauer - Entry point
 *
 * Return: prints every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 24; hour++)
	{
		for (minute = 0; minute <= 60; minute++)
		{
			_putchar(hour / 10);
			_putchar(hour % 10);
			_putchar(':');
			_putchar(minute / 10);
			_putchar(minute % 10);
		}

	}
}
