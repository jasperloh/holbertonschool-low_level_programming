#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 *
 * Description: Prints the multiplication table from 0 to 9
 * with properly aligned numbers.
 */
void times_table(void)
{
	int row;
	int col;
	int result;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			result = row * col;

			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
					_putchar(' ');
			}

			if (result >= 10)
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
