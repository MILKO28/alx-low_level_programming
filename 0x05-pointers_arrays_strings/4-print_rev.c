#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse, followed by anewline
 * @s: string to be revesed
 */

void print_rev(char *s)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	for (; j > 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
