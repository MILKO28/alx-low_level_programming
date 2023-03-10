#include "main.h"
#include <stdio.h>

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *first = haystack;
		char *second = needle;

		while (*first == *second && *second != '\0')
		{
			first++;
			second++;
		}

		if (*second == '\0')
		{
			return (haystack);
		}
		haystack++;
			}

	return (NULL);
}
