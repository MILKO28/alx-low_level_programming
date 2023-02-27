#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: string to be revesed
 */

void print_rev(char *s)
{
	int i, j = 0, len;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	len = j;
	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
