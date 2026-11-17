/**
 * str_concat - concatenantes two strings
 * @str: string
 *
 * Return: array
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
	char *array;
	int i, j;
	int len1, len2, len;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
        {
		s2 = "";
        }

	for (len1 = 0; s1[len1] != '\0'; len1++)
	;

	for (len2 = 0; s2[len2] != '\0'; len2++)
	;

	len = len1 + len2;

	array = malloc(((len + 1) * sizeof(char)));
	if (array == 0)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		array[i] = s1[i];
	}

	for (j = 0; j <= len2; j++)
	{
		array[len1 + j] = s2[j];
	}

	return (array);
}
