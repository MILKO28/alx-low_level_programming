#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	i = 0;
	while (s[i] != '\0')
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
		i++;
	}
	return (NULL);
}
