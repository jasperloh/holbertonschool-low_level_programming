#include <stdio.h>

/**
 * main - prints alphabet in lowercase, then in uppercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	/* print lowercase */
	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	/* print uppercase */
	for (j = 65; j < 91; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
