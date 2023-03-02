#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: input
 * @src: input
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int sum_1 = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		sum_1++;
	}
	for (i = 0; src[i] != '\0'; i++, sum_1++)
	{
		dest[sum_1] = src[i];
	}
	dest[sum_1] = '\0';
	return (dest);
}
