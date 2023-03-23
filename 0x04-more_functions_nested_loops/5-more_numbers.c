#include "main.h"


/**
 * more_numbers - Entry point
 *
 * Return: 10 times the numbers, from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int num, times;

	times = 0;

	while (times < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				continue;
			}
			_putchar(num + '0');
		}
		_putchar('\n');
		times++;
	}
}
