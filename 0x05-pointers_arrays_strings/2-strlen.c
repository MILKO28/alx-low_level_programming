#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer
 * Return: number of strings
 */
int _strlen(char *s)
{
	int i , j = 0;
	char str = s[0];

	for (i = 1; str != '\0'; i++)
	{
		j++;
		str = s[i++];
	}
	return (j);
}
