#include "main.h"

/**
 * main - print_alphabet - Prints the lowercase alphabet
 * followed by a new line
 *
 * Description - prints letters from a to z
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
