#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: string to print the second half from
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	i = length / 2;

	if (length % 2 != 0)
	{
		i = (length + 1) / 2;
	}

	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
