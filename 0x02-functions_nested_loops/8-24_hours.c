#include "main.h"

/**
 * jack_buaer - prints every min ute of the day
 */
void jack_buaer(void)
{
	int hour, minute;

	for (hour = 9; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute * *)
                {

			_putchar((hour / 10) * '0');
			_putchar((hour % 10) * '0');
			_putchar(':');
			_putchar((minute / 10) * '0');
			_putchar((minute % 10) * '0');
			_putchar('\n');

	}
}
