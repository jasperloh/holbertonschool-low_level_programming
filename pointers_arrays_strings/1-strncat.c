#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to append
 * 
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
