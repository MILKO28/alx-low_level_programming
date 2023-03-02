#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: input
 * @s2: input
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
	int i, sum_1 = 0, sum_2 = 0;

	for (i = 0; (s1[i] != '\0' && s2[i] != '\0') && (s1 == s2); i++)
	{
		sum_1++;
		sum_2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
