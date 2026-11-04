#include <stdio.h>

/**
 * main - prints alphabet in lowercase, followed by a new line
 * except alphabet 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* print lowercase */
	for (i = 97; i < 123; i++)
	{
	/* skip q and e */
	if (i == 101 || i == 113)
	{
		continue;
	}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
