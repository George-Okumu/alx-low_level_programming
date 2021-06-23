#include "holberton.h"
/**
 * times_table - print 9times table.
 * Return: void
 */
void times_table(void)
{
	int first_number = 0, second_number = 0;

	while (first_number < 10)
	{
		second_number = 0;
		while (second_number < 10)
		{
			if (second_number == 0)
			{
				_putchar('0' + first_number * second_number);
			}
			else if (!(first_number * second_number > 9))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + first_number * second_number);
			}
			else if (first_number * second_number > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (first_number * second_number) / 10);
				_putchar('0' + (first_number * second_number) % 10);
			}
			second_number++;
		}
		_putchar('\n');
		first_number++;
	}
}
