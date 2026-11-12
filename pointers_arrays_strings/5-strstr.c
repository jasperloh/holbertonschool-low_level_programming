#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring in a string
 *
 * Return: Pointer to the first occurrence of needle, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] != '\0' && haystack[i + j] != '\0'
		       && haystack[i + j] == needle[j])
		{
			j++;
		}

		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}

		i++;
	}

	return (NULL);
}
