#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit,
 * followed by comma and space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 57)
		{
			putchar(i);
			continue;
		}
		putchar(i);
		putchar(',');
		putchar(' ');
	}

	return(0);
}
