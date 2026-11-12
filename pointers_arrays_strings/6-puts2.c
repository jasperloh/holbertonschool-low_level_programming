#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: string to print characters from
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	while (i < length)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
