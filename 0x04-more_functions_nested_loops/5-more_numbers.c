#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, 0 to 24
 * _putchar only 3 times
 * Return: 0 -14 10_ times
 */
void more_numbers(void)
{
	int i, ro;

	for (ro = 0; ro <= 9; ro++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)

				_putchar((i / 10) + '0');

			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
