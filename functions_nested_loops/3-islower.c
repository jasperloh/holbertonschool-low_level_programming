#include "main.h"

/**
 * main - checks the alphabet in lowercase
 *
 * Description: This function checks the lowercase character
 * followed by a new line.
 *
 * Return: void
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
